class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool is_cycle_dfs(int V,vector<int>adj[],int prev,int index,vector<bool>&visited)
    {
        visited[index]=1;
        for(auto x:adj[index])
        {
            //if(x==prev){continue;}
            if(!visited[x])
            {
                if(is_cycle_dfs(V,adj,index,x,visited))
                {
                    return true;
                }
            }
            else if(x!=prev)
            {
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) 
    {
        vector<bool>visited(V,false);
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                if(is_cycle_dfs(V,adj,-1,i,visited)){return true;}
            }
        }
        return false;
    }
};

