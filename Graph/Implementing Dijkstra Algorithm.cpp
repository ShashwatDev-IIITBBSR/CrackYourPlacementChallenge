class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int>dist(V,1000000);
        dist[S]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pair<int,int>p;
        pq.push({0,S});
        while(!pq.empty())
        {
            p=pq.top();
            pq.pop();
            int element=p.second;
            for(auto x:adj[element])
            {
                int v=x[0],wt=x[1];
                if(dist[element]+wt<dist[v])
                {
                    dist[v]=dist[element]+wt;
                    pq.push({dist[v],v});
                }
            }
        }
        return dist;
    }
};