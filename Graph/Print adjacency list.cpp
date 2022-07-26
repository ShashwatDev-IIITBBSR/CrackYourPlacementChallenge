class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<int> adj[]) 
    {
        vector<vector<int>>vec;
        vector<int>v;
        for(int i=0;i<V;i++)
        {
            v.clear();
            v.push_back(i);
            for(int j=0;j<adj[i].size();j++)
            {
                v.push_back(adj[i][j]);
            }
            vec.push_back(v);
        }
        return vec;
    }
};