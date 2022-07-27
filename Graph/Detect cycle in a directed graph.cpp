class Solution {
  public:
  bool is_cycle(vector<int> adj[],vector<bool>&visited,vector<bool>&dfs_visited,int index)
  {
      visited[index]=true;
      dfs_visited[index]=true;
      for(auto x:adj[index])
      {
          if(!visited[x])
          {
              if(is_cycle(adj,visited,dfs_visited,x))
              {
                  return true;
              }
          }
          else if(visited[x]&&dfs_visited[x]){return true;}
      }
      dfs_visited[index]=false;
      return false;
  }
      bool isCyclic(int V, vector<int> adj[])
    {
        vector<bool>visited(V,false),dfs_visited(V,false);
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                if(is_cycle(adj,visited,dfs_visited,i)){return true;}
            }
        }
        return false;
    }
};
   