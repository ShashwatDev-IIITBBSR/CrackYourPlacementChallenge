class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    bool ispossible(vector<vector<int>>&grid,int r,int c)
    {
        int n_row=grid.size(),n_col=grid[0].size();
        if(r<0||c<0||r==n_row||c==n_col||grid[r][c]==0)
        {
            return false;
        }
        return true;
    }
    int dfs(vector<vector<int>>&grid,int row,int col,int &count)
    {
        count++;
        grid[row][col]=0;
        if(ispossible(grid,row-1,col)){dfs(grid,row-1,col,count);}
        if(ispossible(grid,row+1,col)){dfs(grid,row+1,col,count);}
        if(ispossible(grid,row,col-1)){dfs(grid,row,col-1,count);}
        if(ispossible(grid,row,col+1)){dfs(grid,row,col+1,count);}
        if(ispossible(grid,row-1,col-1)){dfs(grid,row-1,col-1,count);}
        if(ispossible(grid,row-1,col+1)){dfs(grid,row-1,col+1,count);}
        if(ispossible(grid,row+1,col-1)){dfs(grid,row+1,col-1,count);}
        if(ispossible(grid,row+1,col+1)){dfs(grid,row+1,col+1,count);}
    }
    int findMaxArea(vector<vector<int>>& grid) 
    {
        int maxi=0,c;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0){continue;}
                c=0;
                dfs(grid,i,j,c);
                maxi=max(maxi,c);
            }
        }
        return maxi;
    }
};