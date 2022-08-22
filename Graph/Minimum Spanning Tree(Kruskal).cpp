class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
	int par[1001];
	int rank[1001];
	void make_set()
	{
	    for(int i=0;i<1001;i++)
	    {
	        par[i]=i;
	        rank[i]=0;
	    }
	}
	int findpar(int a)
	{
	    if(par[a]==a)
	    {
	        return a;
	    }
	    else
	    {
	        return par[a]=findpar(par[a]);
	    }
	}
	void union_(int v,int u)
	{
	    int v_=findpar(v);
	    int u_=findpar(u);
	    
	    if(rank[v_]<rank[u_]){par[v_]=u_;}
	    else if(rank[v_]>rank[u_]){par[u_]=v_;}
	    else{par[v_]=u_;rank[u_]++;}
	}
	struct node
	{
	    int u;
	    int v;
	    int wt;
	    node(int first,int second,int weight)
	    {
	        u=first;
	        v=second;
	        wt=weight;
	    }
	};
	bool static comp(struct node a,struct node b)
	{
	    if(a.wt<b.wt){return true;}
	    else{return false;}
	}
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        int cost=0;
        vector<node>edges;
        for(int i=0;i<V;i++)
        {
            int v,wt;
            for(auto x:adj[i])
            {
                v=x[0];
                wt=x[1];
                edges.push_back(node(i,v,wt));
            }
        }
        sort(edges.begin(),edges.end(),comp);
        
        make_set();
        
        vector<pair<int,int>>mst;
        for(auto x:edges)
        {
            if(findpar(x.u)!=findpar(x.v))
            {
                cost+=x.wt;
                union_(x.v,x.u);
                mst.push_back({x.v,x.u});
            }
        }
        return cost;
    }
};