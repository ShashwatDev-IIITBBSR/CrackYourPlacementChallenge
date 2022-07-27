//Using Topological Sort(BFS based Algorithm)
class Solution
{
    public:
    vector<int> indegree(vector<int>adj[],int V)
    {
        vector<int>vec(V,0);
        for(int i=0;i<V;i++)
        {
            for(auto x:adj[i])
            {
                vec[x]++;
            }
        }
        return vec;
    }
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>vec,result;
	    vec=indegree(adj,V);
	    queue<int>q;
	    int t;
	    for(int i=0;i<V;i++)
        {
            if(vec[i]==0)
            {
                q.push(i);
                result.push_back(i);
            }
        }
        while(!q.empty())
        {
            t=q.front();
            q.pop();
            for(auto x:adj[t])
            {
                if(vec[x]!=0)
                {
                    vec[x]--;
                    if(vec[x]==0)
                    {
                        q.push(x);
                        result.push_back(x);
                    }
                }
            }
        }
        return result;
	}
};

//Using DFS algorithm by stack
class Solution
{
    public:
    stack<int>st;
    void dfs(vector<int>adj[],int index,vector<bool>&visited)
    {
        //dfs_visited[index]=1;
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
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>vec;
	    vector<bool>visited(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i]==0)
	        {
	            dfs(adj,i,visited);
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




