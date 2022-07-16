class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        vector<vector<int>>vec;
        priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,greater<pair<int,vector<int>>>>pq;
        pair<int,vector<int>>p;
        vector<int>v(2);
        int n=points.size();
        for(int i=0;i<n;i++)
        {
            p.first=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            v[0]=points[i][0];
            v[1]=points[i][1];
            p.second=v;
            pq.push(p);
        }
        while(k>0)
        {
            p=pq.top();
            pq.pop();
            vec.push_back(p.second);
            k--;
        }
        return vec;
    }
};