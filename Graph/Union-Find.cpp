class Solution
{
    public:
    //Function to merge two nodes a and b.
    int parent(int a,int par[])
    {
        while(par[a]!=a)
        {
            a=par[a];
        }
        return a;
    }
    void union_( int a, int b, int par[], int rank1[]) 
    {
        a=parent(a,par);
        b=parent(b,par);
        if(rank1[a]<rank1[b])
        {
            par[a]=b;
        }
        else if(rank1[a]>rank1[b])
        {
            par[b]=a;
        }
        else
        {
            par[a]=b;
            rank1[b]++;
        }
    }
    
    //Function to check whether 2 nodes are connected or not.
    bool isConnected(int x,int y, int par[], int rank1[])
    {
        x=parent(x,par);
        y=parent(y,par);
        if(x==y){return true;}
        else{return false;}
    }
};
