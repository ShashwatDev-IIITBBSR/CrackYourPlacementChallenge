//Using BFS based topological sort
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


//Using DFS based Topological sort
class Solution {
public:
    stack<int>st;
    void dfs(vector<int>adj[],int index,vector<bool>&visited)
    {
        visited[index]=1;
        for(auto x:adj[index])
        {
            if(visited[x]==0)
            {
                dfs(adj,x,visited);
            }
        }
        st.push(index);
    }
    void add_edge(vector<vector<int>> prerequisites,int n,vector<int>adj[])
    {
        for(int i=0;i<prerequisites.size();i++)
        {
             adj[prerequisites[i][1]].push_back(prerequisites[i][0]);//remember [a,b] is given means to do a we need to do b before it. 
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
        vector<int>adj[numCourses];
        vector<int>vec;
        add_edge(prerequisites,numCourses,adj);
        vector<bool>visited(numCourses,0),dfs_visited(numCourses,0),visit(numCourses,0);
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
        for(int i=0;i<numCourses;i++)
        {
            if(visit[i]==0)
            {
                dfs(adj,i,visit);
            }
        }
        while(!st.empty())
        {
            vec.push_back(st.top());
            st.pop();
        }
        return vec;
    }
};
