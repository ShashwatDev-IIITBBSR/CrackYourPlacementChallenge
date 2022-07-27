/*class Solution {
public:
    void add_edge(vector<int> edge,vector<int> adj[])
    {
        adj[edge[0]].push_back(edge[1]);        
    }
    bool is_cycle(vector<int> adj[],int index,vector<bool>&visited,vector<bool>&dfs_visited)
    {
        visited[index]=1;
        dfs_visited[index]=1;
        for(auto x:adj[index])
        {
            if(visited[x]==0)
            {
                if(is_cycle(adj,x,visited,dfs_visited)){return true;}
            }
            else if(dfs_visited[x]){return true;}
        }
        dfs_visited[index]=0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        int n=prerequisites.size();
        vector<int> adj[numCourses];
        for(int i=0;i<n;i++)
        {
            add_edge(prerequisites[i],adj);
        }
        vector<bool>dfs_visited(numCourses,0);
        for(int i=0;i<numCourses;i++)
        {
            vector<bool>visited(numCourses,0);
            if(is_cycle(adj,i,visited,dfs_visited))
            {
                return false;
            }
        }
        return true;
    }
};*/
class Solution {
public:
    void add_edge(vector<int> edge,vector<int> adj[])
    {
        adj[edge[0]].push_back(edge[1]);        
    }
    bool is_cycle(vector<int> adj[],int index,vector<bool>&visited,vector<bool>&dfs_visited)
    {
        visited[index]=1;
        dfs_visited[index]=1;
        for(auto x:adj[index])
        {
            if(visited[x]==0)
            {
                if(is_cycle(adj,x,visited,dfs_visited)){return true;}
            }
            else if(dfs_visited[x]){return true;}
        }
        dfs_visited[index]=0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        int n=prerequisites.size();
        vector<int> adj[numCourses];
        for(int i=0;i<n;i++)
        {
            add_edge(prerequisites[i],adj);
        }
        vector<bool>visited(numCourses,0),dfs_visited(numCourses,0),temp;
        for(int i=0;i<numCourses;i++)
        {
            if(visited[i]==0)
            {
                temp=visited;
                if(is_cycle(adj,i,temp,dfs_visited)){return false;}
                visited=temp;
            }
        }
        return true;
    }
};