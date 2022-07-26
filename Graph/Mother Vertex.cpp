class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    void dfs(vector<int>adj[],vector<bool>&visited,int index,int V)
    {
        if(index==V){return;}
        visited[index]=1;
        for(auto x:adj[index])
        {
            if(visited[x]==0)
            {
                dfs(adj,visited,x,V);
            }
        }
    }
	int findMotherVertex(int V, vector<int>adj[])
	{
	    for(int i=0;i<V;i++)
	    {
	        vector<bool>visited(V,0);
	        dfs(adj,visited,i,V);
	        int j=0;
	        while(j<V &&visited[j]==true){j++;}
	        if(j==V){return i;}
	    }
	    return -1;
	}

};

//Optimised Solution
class Solution 
{
    public:
    int count;
    //Function to find a Mother Vertex in the Graph.
    void dfs(vector<int>adj[],vector<bool>&visited,int index,int V)
    {
        if(index==V){return;}
        visited[index]=1;
        count++;
        for(auto x:adj[index])
        {
            if(visited[x]==0)
            {
                dfs(adj,visited,x,V);
            }
        }
    }
	int findMotherVertex(int V, vector<int>adj[])
	{
	    for(int i=0;i<V;i++)
	    {
	        count=0;
	        vector<bool>visited(V,0);
	        dfs(adj,visited,i,V);
	        if(count==V){return i;}
	    }
	    return -1;
	}

};


