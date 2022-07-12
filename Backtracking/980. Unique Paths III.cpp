class Solution {
public:
    int total=0;//storing answer
    int num_walkable=0;//count of number of walkable square
    bool iswalkable(vector<vector<int>>& grid,int row,int col)
    {
        int r=grid.size();
        int c=grid[0].size();
        if(row<0||col<0||row==r||col==c){return false;}
        if(grid[row][col]==0||grid[row][col]==2){return true;}
        return false;
    }
    void recursion(vector<vector<int>>& grid,int row,int col,int level)
    {
        if(grid[row][col]==2)
        {
            if(level==num_walkable){total++;}//checking if count of number of walkable square is equal to level
            return;
        }
        if(grid[row][col]==-1){return;}
        int k=grid[row][col];
        grid[row][col]=-1;
        if(iswalkable(grid,row+1,col)){recursion(grid,row+1,col,level+1);}
        if(iswalkable(grid,row-1,col)){recursion(grid,row-1,col,level+1);}
        if(iswalkable(grid,row,col+1)){recursion(grid,row,col+1,level+1);}
        if(iswalkable(grid,row,col-1)){recursion(grid,row,col-1,level+1);}
        grid[row][col]=k;
    }
    int uniquePathsIII(vector<vector<int>>& grid) 
    {
        int i,j,r=-1,c;
        for(i=0;i<grid.size();i++)
        {
            for(j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1){r=i;c=j;}//starting index
                if(grid[i][j]==0||grid[i][j]==2){num_walkable++;}//counting number of walkable square
            }
        }
        recursion(grid,r,c,0);
        return total;
    }
};
    