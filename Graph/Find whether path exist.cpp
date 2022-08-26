class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool isvalid(vector<vector<int>>&grid,int x,int y)
    {
        int r=grid.size(),c=grid[0].size();
        if(x<0||y<0||x==r||c==y||grid[x][y]==0){return 0;}
        return 1;
    }
    bool ispossible(vector<vector<int>>&grid,int x,int y)
    {
        if(grid[x][y]==2){return 1;}
        grid[x][y]=0;
        if(isvalid(grid,x-1,y)){if(ispossible(grid,x-1,y)){return true;}}
        if(isvalid(grid,x+1,y)){if(ispossible(grid,x+1,y)){return true;}}
        if(isvalid(grid,x,y-1)){if(ispossible(grid,x,y-1)){return true;}}
        if(isvalid(grid,x,y+1)){if(ispossible(grid,x,y+1)){return true;}}
        return false;
    }
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int r=grid.size(),c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    return ispossible(grid,i,j);
                }
            }
        }
    }
};
