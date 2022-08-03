//BFS Solution
class Solution {
public:
    bool recursion(queue<int>q,vector<int>adj[],vector<int>&color)
    {
        if(q.empty()){return true;}
        //queue<int>child;
        int k;
        while(!q.empty())
        {
            k=q.front();
            q.pop();
            for(auto x:adj[k])
            {
                if(color[x]==-1)
                {
                    if(color[k]==1){color[x]=0;}
                    else{color[x]=1;}
                    q.push(x);
                    //child.push(x);
                }
                else
                {
                    if(color[k]==color[x]){return false;}
                }
            }
        }
        return true;
        //return recursion(child,adj,color);
    }
	bool isBipartite(int V, vector<int>adj[])
	{
	    vector<int>color(V,-1);
	    for(int i=0;i<V;i++)
	    {
	        if(color[i]==-1)
	        {
	           queue<int>q;
	           q.push(i);
	           color[i]=0;
	           if(!recursion(q,adj,color)){return false;}
	        }
	    }
	    return true;
	}

};

//DFS
class Solution {
public:
    bool dfs(vector<vector<int>>&graph,vector<int>&color,int index)
    {
        for(auto x:graph[index])
        {
            if(color[x]==-1)
            {
                color[x]=1-color[index];
                if(dfs(graph,color,x)==false){return false;}
            }
            else
            {
                if(color[x]==color[index]){return false;}
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) 
    {
        int v=graph.size();
        vector<int>color(v,-1);
        for(int i=0;i<v;i++)
        {
            if(color[i]==-1)
            {
                color[i]=0;
                if(dfs(graph,color,i)==false){return false;}
            }
        }
        return true;
    }
};
