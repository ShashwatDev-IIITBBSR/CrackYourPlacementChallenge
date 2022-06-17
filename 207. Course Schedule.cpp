public:
    void add_edge(vector<int> adj[],int u, int v)
    {
        adj[v].push_back(u);
    }
    bool cycle(int val,vector<int> adj[],vector<bool> &visited,vector<bool> &dfs_visited)
    { 
        visited[val]=true;
        dfs_visited[val]=true;
        for(auto j:adj[val])
        {
            if(!visited[j])
            {
                if(cycle(j,adj,visited,dfs_visited))
                   {
                       return true;
                   }
            }
            else if(visited[j]&&dfs_visited[j])
             {
                    return true;
              }
         }
        dfs_visited[val]=false;
        return false;  
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        vector<int> adj[numCourses];
        for(int i=0;i<prerequisites.size();i++)
        {
            add_edge(adj,prerequisites[i][0],prerequisites[i][1]);
        }
        vector<bool> visited(numCourses,false);
        vector<bool> dfs_visited(numCourses,false);
        for(int i=0;i<numCourses;i++)
        {
            if(!visited[i])
            {
                if(cycle(i,adj,visited,dfs_visited))
                {
                    return false;
                }
            }
        }
        return true;
    }
};


