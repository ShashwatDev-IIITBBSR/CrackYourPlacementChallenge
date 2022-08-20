class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<int>key(V,INT_MAX);
        vector<bool>mst(V,false);
        vector<int>parent(V,-1);
        vector<int>temp;
        key[0]=0;
        int element,weight;
        for(int count=0;count<V-1;count++)
        {
            int mini=INT_MAX,u;
            for(int i=0;i<V;i++)
            {
                if(mst[i]==false &&mini>key[i])
                {
                    mini=key[i];
                    u=i;
                }
            }
            mst[u]=1;
            for(auto x:adj[u])
            {
                element=x[0];
                weight=x[1];
                if(mst[element]==false&&weight<key[element])
                {
                    parent[element]=u;
                    key[element]=weight;
                }
            }
        }
        int sum=0;
        for(int i=0;i<V;i++)
        {
            sum+=key[i];
        }
        return sum;
    }
};

