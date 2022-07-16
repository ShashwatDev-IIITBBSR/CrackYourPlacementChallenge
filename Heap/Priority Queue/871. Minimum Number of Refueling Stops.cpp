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
