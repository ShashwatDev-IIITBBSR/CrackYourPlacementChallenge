string gridChallenge(vector<string> grid) 
{
    int m=grid.size(),n=grid[0].size();
    string s="NO";
    for(int i=0;i<m;i++)
    {
        sort(grid[i].begin(),grid[i].end());
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(grid[j][i]<grid[j-1][i]){return s;}
        }
    }
    return "YES";
}