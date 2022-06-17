class Solution {
public:
    void adjacency_list(vector<int> adj[], vector<int>edge)
    {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        int i,k,j;
        queue<int> q;
        vector<int> visit(n+1,0);
        vector<int> adj[n+1];
        for(i=0;i<edges.size();i++)
        {
            adjacency_list(adj,edges[i]);
        }
        q.push(source);
        visit[source]=1;
        if(source==destination)
        {return true;}
        while(!q.empty())
        {
            k=q.front();
            q.pop();
            for(auto j:adj[k])
            {
                if(!visit[j])
                {
                    if(j==destination){return true;}
                    q.push(j);
                    visit[j]=1;
                }
            }
        }
        return false;
    }
};