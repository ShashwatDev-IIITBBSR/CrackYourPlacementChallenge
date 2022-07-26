class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) 
    {
        vector<int>vec;
        queue<int>q;
        int k;
        vector<bool>visited(V,0);
        q.push(0);
        vec.push_back(0);
        visited[0]=1;
        while(!q.empty())
        {
            k=q.front();
            q.pop();
            for(auto x:adj[k])
            {
                if(visited[x]==0)
                {
                    q.push(x);
                    vec.push_back(x);
                    visited[x]=1;
                }
            }
        }
        return vec;
    }
};