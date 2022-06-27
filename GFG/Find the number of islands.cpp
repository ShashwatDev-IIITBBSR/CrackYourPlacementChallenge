class Solution {
  public:
    // Function to find the number of islands.
    void num(vector<vector<char>>& grid,int row,int col) 
    {
        int n_row=grid.size(),n_col=grid[0].size();
        if(row<0||row>=n_row||col<0||col>=n_col){return;}
        if(grid[row][col]=='0'){return;}
        grid[row][col]='0';
        num(grid,row+1,col);
        num(grid,row,col+1);
        num(grid,row-1,col);
        num(grid,row,col-1);
        num(grid,row+1,col-1);
        num(grid,row+1,col+1);
        num(grid,row-1,col+1);
        num(grid,row-1,col-1);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    num(grid,i,j);
                }
            }
        }
        return count;
    }
};