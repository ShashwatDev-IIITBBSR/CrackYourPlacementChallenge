class Solution {
public:
    void add_edge(vector<int>edge,vector<int>adj[])
    {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        if(edges.empty()||source==destination){return true;}
        vector<int>adj[n+1];
        for(auto x:edges)
        {
            add_edge(x,adj);
        }
        vector<bool>visited(n,0);
        queue<int>q;
        q.push(source);
        visited[source]=1;
        int k;
        while(!q.empty())
        {
            k=q.front();
            q.pop();
            for(auto x:adj[k])
            {
                if(visited[x]==0)
                {
                    if(x==destination){return true;}
                    visited[x]=1;
                    q.push(x);
                }
            }
        }
        return false;
    }
};
