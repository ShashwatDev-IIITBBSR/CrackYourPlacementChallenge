class Solution{
	public:
	/*  Function to implement Dijkstra
    *   adj: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    struct node
    {
        int u,v,wt;
        node(int first,int second,int weight)
        {
            u=first;
            v=second;
            wt=weight;
        }
    };
    vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) 
    {
        vector<int>dis(V,100000000);
        int n=adj.size();
        dis[S]=0;
        vector<node>vec;
        for(int i=0;i<n;i++)
        {
            vec.push_back(node(adj[i][0],adj[i][1],adj[i][2]));
        }
        for(int i=0;i<n;i++)
        {
            for(auto x:vec)
            {
                if(dis[x.u]+x.wt<dis[x.v])
                {
                    dis[x.v]=dis[x.u]+x.wt;
                }
            }
        }
        return dis;
    }
};
/*
class Solution{
	public:
    vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) 
    {
        vector<int>dis(V,100000000);
        int n=adj.size();
        dis[S]=0;
        for(int i=0;i<n;i++)
        {
            for(auto x:adj)
            {
                if(dis[x[0]]+x[2]<dis[x[1]])
                {
                    dis[x[1]]=dis[x[0]]+x[2];
                }
            }
        }
        return dis;
        
    }
        // Code here
};*/

