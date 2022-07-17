//O(n) solution 
class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) 
    {
        priority_queue<pair<int,int>>pq,t;
        pair<int,int>p;
        int j,n=points.size(),maxi=INT_MIN;
        for(j=0;j<n;j++)
        {
            if(!pq.empty())
            {
                while(!pq.empty()&& points[j][0]-pq.top().second>k)
                {
                    //t.push(pq.top());
                    //We don't need to carry out above step i.e. to keep track of popped items from pq and later insert it back to pq since points[j+1][0]>points[j][0] so if points[j][0]-pq.top().second>k then points[j+1][0]-pq.top().second will definately be greater than k.
                    pq.pop();
                }
                if(!pq.empty())
                {
                    maxi=max(maxi,pq.top().first+points[j][0]+points[j][1]);
                }
               /* while(!t.empty())//Insertion of items back to pq
                {
                    pq.push(t.top());
                   t.pop();
                }*/
            }
            p.first=points[j][1]-points[j][0];
            p.second=points[j][0];
            pq.push(p);
        }
        return maxi;
    }
};

//O(n*n)solution
/*class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) 
    {
        int maxi=INT_MIN,n=points.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(abs(points[i][0]-points[j][0])<=k){maxi=max(maxi,points[i][1]+points[j][1]+abs(points[i][0]-points[j][0]));}
            }
        }
        return maxi;
    }
};*/