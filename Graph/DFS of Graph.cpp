class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int>vec;
    void recursion(int index,vector<int>adj[],vector<bool>&vis)
    {
        vis[index]=1;
        vec.push_back(index);
        for(auto x:adj[index])
        {
            if(vis[x]==false)
            {
                recursion(x,adj,vis);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) 
    {
        vector<bool>vis(V,0);
        recursion(0,adj,vis);
        return vec;
        // Code here
    }
};
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) 
    {
        stack<int>st;
        vector<bool>vis(V,0);
        vector<int>vec;
        st.push(0);
        //vec.push_back(0);
        vis[0]=1;
        while(!st.empty())
        {
            int e=st.top();
            st.pop();
            int n=adj[e].size();
            vec.push_back(e);
            for(int i=n-1;i>=0;i--)
            {
                int a=adj[e][i];
                if(vis[a]==0)
                {
                    st.push(a);
                    vis[a]=1;
                    //vec.push_back(a);
                }
            }
        }
        return vec;
    }
};




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