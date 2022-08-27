class Solution {
  public:
    // Function to find the number of islands.
    bool ispossible(int x,int y,vector<vector<char>>&grid)
    {
        int r=grid.size(),c=grid[0].size();
        if(x<0||y<0||x==r||y==c||grid[x][y]=='0')
        {
            return 0;
        }
        return 1;
    }
    void dfs(int x,int y,vector<vector<char>>& grid)
    {
        int r=grid.size(),c=grid[0].size();
        grid[x][y]='0';
        if(ispossible(x-1,y,grid)){dfs(x-1,y,grid);}
        if(ispossible(x+1,y,grid)){dfs(x+1,y,grid);}
        if(ispossible(x,y-1,grid)){dfs(x,y-1,grid);}
        if(ispossible(x,y+1,grid)){dfs(x,y+1,grid);}
        if(ispossible(x-1,y-1,grid)){dfs(x-1,y-1,grid);}
        if(ispossible(x-1,y+1,grid)){dfs(x-1,y+1,grid);}
        if(ispossible(x+1,y-1,grid)){dfs(x+1,y-1,grid);}
        if(ispossible(x+1,y+1,grid)){dfs(x+1,y+1,grid);}
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int count=0;
        int r=grid.size(),c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    dfs(i,j,grid);
                }
            }
        }
        return count;
        // Code here
    }
};






