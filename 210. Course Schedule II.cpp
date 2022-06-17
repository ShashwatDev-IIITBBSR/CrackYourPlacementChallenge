class Solution {
public:
    void add_edge(vector<int> adj[],int u, int v)
    {
        adj[v].push_back(u);
    }
    void indegree_calc(vector<int> adj[],int numCourse,vector<int> &indegree)
    {
        for(int i=0;i<numCourse;i++)
        {
            for(auto j:adj[i])
            {
                indegree[j]++;
            }
        }
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
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) 
    {
        int k;
        vector<int> adj[numCourses];
        vector<int> indegree(numCourses,0);
        queue<int> q;
        vector<int> vec;
        for(int i=0;i<prerequisites.size();i++)
        {
            add_edge(adj,prerequisites[i][0],prerequisites[i][1]);
        }
        indegree_calc(adj,numCourses,indegree);
        vector<bool> visited(numCourses,false);
        vector<bool> dfs_visited(numCourses,false);
        for(int i=0;i<numCourses;i++)   //check for cycle
        {
            if(!visited[i])
            {
                if(cycle(i,adj,visited,dfs_visited))
                {
                    return vec;
                }
            }
        }
        for(int i=0;i<numCourses;i++)   //Topological Sort using BFS
        {
            if(indegree[i]==0)
            {
                q.push(i);
                vec.push_back(i);
            }
        }
        while(!q.empty())
        {
            k=q.front();
            q.pop();
            for(auto j:adj[k])
            {
                if(indegree[j]>0)
                {
                    indegree[j]--;
                    if(indegree[j]==0)
                    {
                        q.push(j);
                        vec.push_back(j);
                    }
                }
            }
        }
        return vec;
    }
};












