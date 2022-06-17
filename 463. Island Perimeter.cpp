class Solution {
public:
    bool istrue(int row,int col,int total_row,int total_column)
    {
        if((row<total_row&&row>-1)&&(col<total_column&&col>-1))
        {
            return true;
        }
        return false;
    }
    void dfs(vector<vector<int>>& grid,int r,int c,int &perimeter)
    {
        int m,n;
        m=grid.size();
        n=grid[0].size();
        grid[r][c]=2;
        int k=0;
        if(istrue(r-1,c,m,n)&&((grid[r-1][c]==1)||(grid[r-1][c]==2))){k++;}
        if(istrue(r+1,c,m,n)&&((grid[r+1][c]==1)||(grid[r+1][c]==2))){k++;}
        if(istrue(r,c-1,m,n)&&((grid[r][c-1]==1)||(grid[r][c-1]==2))){k++;}
        if(istrue(r,c+1,m,n)&&((grid[r][c+1]==1)||(grid[r][c+1]==2))){k++;}
        perimeter=perimeter+4-k;
        if(istrue(r-1,c,m,n)&&grid[r-1][c]==1){dfs(grid,r-1,c,perimeter);}
        if(istrue(r+1,c,m,n)&&grid[r+1][c]==1){dfs(grid,r+1,c,perimeter);}
        if(istrue(r,c-1,m,n)&&grid[r][c-1]==1){dfs(grid,r,c-1,perimeter);}
        if(istrue(r,c+1,m,n)&&grid[r][c+1]==1){dfs(grid,r,c+1,perimeter);}
    }
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int m,n,i,j;
        m=grid.size();
        n=grid[0].size();
        int perimeter =0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    dfs(grid,i,j,perimeter);
                    return perimeter;
                }
            }
        }
        return perimeter;
    }
};