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


class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool is_cycle(int index,vector<int>adj[],vector<bool>&visited,vector<bool>&dfs_visited)
    {
        dfs_visited[index]=1;
        visited[index]=1;
        for(auto x:adj[index])
        {
            if(visited[x]==0&&is_cycle(x,adj,visited,dfs_visited)){return true;}
            else if(visited[x]==1&&dfs_visited[x]==1){return 1;}
        }
        dfs_visited[index]=0;
        return 0;
    }
    bool isCyclic(int V, vector<int> adj[]) 
    {
        vector<bool>visited(V,0),dfs_visited(V,0);
        for(int i=0;i<V;i++)
        {
            if(visited[i]==0)
            {
                if(is_cycle(i,adj,visited,dfs_visited)){return 1;}
            }
        }
        return 0;
    }
};

