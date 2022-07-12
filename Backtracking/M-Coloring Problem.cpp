bool Coloring(bool graph[101][101], int m, int n,int curr,vector<int> vec)
{
    if(curr==n){return true;}
    int i,j;
    for(i=1;i<=m;i++)//assigning color
    {
        for(j=0;j<n;j++)//checking if color is already used
        {
            if(graph[curr][j]==1&&vec[j]==i){break;}
        }
        if(j==n)
        {
            vec[curr]=i;
            if(Coloring(graph,m,n,curr+1,vec)){return true;}
            vec[curr]=-1;
        }
    }
    return false;
}


bool graphColoring(bool graph[101][101], int m, int n) 
{
    vector<int>vec(n,-1);
    return Coloring(graph,m,n,0,vec);
}
