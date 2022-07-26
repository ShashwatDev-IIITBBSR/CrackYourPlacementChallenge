class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int>dfs;
    unordered_set<int>visited;
    void dfs_graph(int index, vector<int> adj[])
    {
        dfs.push_back(index);
        visited.insert(index);
        for(auto x:adj[index])
        {
            if(!(visited.find(x)!=visited.end()))
            {
                dfs_graph(x,adj);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) 
    {
        dfs.clear();
        visited.clear();
        dfs_graph(0,adj);
        return dfs;
    }
};

//Another Method
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int>vec;
    void dfs_graph(vector<int> adj[],int index,vector<bool>&visited)
    {
        vec.push_back(index);
        visited[index]=1;
        for(auto x:adj[index])
        {
            if(!visited[x])
            {
                dfs_graph(adj,x,visited);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) 
    {
        vector<bool>visited(V,false);
        vec.clear();
        dfs_graph(adj,0,visited);
        return vec;
    }
};