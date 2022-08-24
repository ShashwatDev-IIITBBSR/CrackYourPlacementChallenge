class Solution
{
	public:
	void dfs(int s,vector<int>adj[],vector<bool>&visited,stack<int>&st)
	{
	    visited[s]=1;
	    for(auto x:adj[s])
	    {
	        if(visited[x]==0)
	        {
	            dfs(x,adj,visited,st);
	        }
	    }
	    st.push(s);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>ind;
	    stack<int>st;
	    vector<bool>visited(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i]==0)
	        {
	            dfs(i,adj,visited,st);
	        }
	    }
        vector<int>res;
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        return res;
	}
};

/*class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> indegree(int V,vector<int>adj[])
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
	    vector<int>ind;
	    vector<int>toposort;
	    ind=indegree(V,adj);
	    queue<int>q;
	    for(int i=0;i<V;i++)
	    {
	        if(ind[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    while(!q.empty())
	    {
	        int e=q.front();
	        q.pop();
	        toposort.push_back(e);
	        for(auto x:adj[e])
	        {
	            if(ind[x]>0)
	            {
	                ind[x]--;
	                if(ind[x]==0)
	                {
	                    q.push(x);
	                }
	            }
	        }
	    }
	    return toposort;
	}
};*/













