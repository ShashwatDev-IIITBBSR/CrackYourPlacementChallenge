
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) 
    {
        vector<int>vec;
        vector<bool>vis(V,false);
        queue<int>q;
        int n=V;
        for(int i=0;i<n;i++)//For all components
        {
            if(vis[i]==false)
            {
                q.push(i);
                vis[i]=1;
                vec.push_back(i);
                while(!q.empty())
                {
                    int e=q.front();
                    q.pop();
                    for(auto x:adj[e])
                    {
                        if(vis[x]==false)
                        {
                            q.push(x);
                            vis[x]=1;
                            vec.push_back(x);
                        }
                    }
                }
            }
        }
        return vec;
    }
};

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int>vec;
    void recursion(queue<int>q,vector<bool>&vis,vector<int>adj[])
    {
        queue<int>child;
        while(!q.empty())
        {
            int e=q.front();
            q.pop();
            for(auto x:adj[e])
            {
                if(vis[x]==0)
                {
                    child.push(x);
                    vec.push_back(x);
                    vis[x]=1;
                }
            }
        }
        if(!child.empty()){recursion(child,vis,adj);}
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) 
    {
        vec.push_back(0);
        vector<bool>vis(V,0);
        vis[0]=1;
        queue<int>q;
        q.push(0);
        recursion(q,vis,adj);
        return vec;
    }
};


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

/*class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int>vec; 
    void recursion(vector<int>adj[],queue<int>q,vector<bool>&visited)
    {
        queue<int>child;
        int t;
        while(!q.empty())
        {
            t=q.front();
            vec.push_back(t);
            q.pop();
            for(auto x:adj[t])
            {
                if(visited[x]==false)
                {
                    child.push(x);
                    visited[x]=true;
                }
            }
        }
        if(!child.empty()){recursion(adj,child,visited);}
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) 
    {
        queue<int>q;
        vector<bool>visited(V,0);
        q.push(0);
        recursion(adj,q,visited);
        return vec;
    }
};*/
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph
    vector<int> bfsOfGraph(int V, vector<int> adj[]) 
    {
        vector<int>vec; 
        queue<int>q;
        vector<bool>visited(V,0);
        q.push(0);
        int k;
        visited[0]=1;
        while(q.empty()!=true)
        {
            k=q.front();
            q.pop();
            vec.push_back(k);
            for(auto x:adj[k])
            {
                if(visited[x]==false)
                {
                    visited[x]=1;
                    q.push(x);
                }
            }
        }
        return vec;
    }
};
