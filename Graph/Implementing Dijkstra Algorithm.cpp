class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int>dis(V,10000000);
        dis[S]=0;
        queue<int>pq;
        pq.push(S);
        while(!pq.empty())
        {
            int element=pq.front();
            pq.pop();
            for(auto x:adj[element])
            {
                int v=x[0],wt=x[1];
                if(dis[element]+wt<dis[v])
                {
                    dis[v]=dis[element]+wt;
                    pq.push(v);
                }
            }
        }
        return dis;
    }
};

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