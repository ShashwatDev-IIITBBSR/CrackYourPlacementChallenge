class Solution {
  public:
  void dfs(int index,vector<int>vec[],vector<bool>&visited)
  {
      visited[index]=1;
      for(auto x:vec[index])
      {
          if(visited[x]==0)
          {
              dfs(x,vec,visited);
          }
      }
  }
    int numProvinces(vector<vector<int>> adj, int V) 
    {
        vector<int>vec[V];
        int count=0;
        for(int i=0;i<V;i++)
        {
            for(int j=i+1;j<V;j++)
            {
                if(i<j&&adj[i][j]==1&&adj[j][i]==1)
                {
                    vec[i].push_back(j);
                    vec[j].push_back(i);
                }
            }
        }
        vector<bool>visited(V,0);
        for(int i=0;i<V;i++)
        {
            if(visited[i]==0)
            {
                count++;
                dfs(i,vec,visited);
            }
        }
        return count;
    }
};
