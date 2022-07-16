class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) 
    {
        priority_queue<pair<int,int>>pq,temp;//pair will save fuel,position
        pair<int,int>p;
        int num_refuel=0;
        int total_fuel=startFuel;
        int i=0;
        for(i=0;i<stations.size();i++)
        {
            p.first=stations[i][1];
            p.second=stations[i][0];
            pq.push(p);
        }
        while(total_fuel<target)
        {
            int cur_fuel=total_fuel;
            while(!pq.empty()&&cur_fuel==total_fuel)
            {
                p=pq.top();
                pq.pop();
                if(p.second<=total_fuel)//We can refuel or not, since total_fuel tells us max distance we can go at present
                {
                    total_fuel+=p.first;
                    num_refuel++;
                }
                else
                {
                    temp.push(p);
                }
            }
            if(pq.empty()&&cur_fuel==total_fuel){return -1;}//We cant reach target
            while(!temp.empty())
            {
                p=temp.top();
                temp.pop();
                pq.push(p);
            }
        }
        return num_refuel;
    }
};
//Another Solution
/*
class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n = stations.size();
        
        priority_queue<int> pq; //max heap
        
		//	if we can't reach target, I will first use the largestfuel Station
		//	(which can take me farthest) and move ahead and keep doing this.
        
        int curr = startFuel; //my current position
        int i = 0; //station index
        int result = 0;
        while(curr < target) { //until I reach my target
            while(i < n && curr >= stations[i][0]) {
                
				//	  Sice, I am already ahead of or at this station
				//	  (i.e. curr >= stations[i][0])  we don't use this
				//	  station and try to move ahead but I store this
				//	  station in maxheap to use in future
				
                pq.push(stations[i][1]);
				//Keep the station at top which can take me farthest (maximum gas)
                i++;
            }
            
            if(pq.empty()) //we can't move further now
                return -1;
            
            int dist = pq.top();
            pq.pop();
            
            curr += dist;
            result++;
        }
        
        return result;
        
    }
};*/

