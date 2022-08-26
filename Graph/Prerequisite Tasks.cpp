class Solution {
public:
    bool iscycle(vector<int>adj[],int index,vector<bool>&visited,vector<bool>&dfsvisited)
    {
        visited[index]=1;
        dfsvisited[index]=1;
        for(auto x:adj[index])
        {
            if(visited[x]==0)
            {
                if(iscycle(adj,x,visited,dfsvisited)){return 1;}
            }
            else if(dfsvisited[x]==1)
            {
                return 1;
            }
        }
        dfsvisited[index]=0;
        return 0;
    }
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) 
	{
	    vector<int>adj[N];
	    for(auto x:prerequisites)
	    {
	        adj[x.first].push_back(x.second);
	    }
	    vector<bool>visited(N,0),dfsvisited(N,0);
	    for(int i=0;i<N;i++)
	    {
	         if(iscycle(adj,i,visited,dfsvisited)){return 0;}
	    }
	    return 1;
	}
};
