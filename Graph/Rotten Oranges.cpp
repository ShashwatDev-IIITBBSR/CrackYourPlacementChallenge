class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    bool ifpossible(vector<vector<int>>&grid,int i,int j)
    {
        int r=grid.size(),c=grid[0].size();
        if(i<0||j<0||i==r||j==c||grid[i][j]==2||grid[i][j]==0)
        {
            return false;
        }
        return true;
    }
    vector<vector<int>> rotting(vector<vector<int>>grid)
    {
        int r=grid.size(),c=grid[0].size();
        vector<vector<int>>mat;
        mat=grid;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==2)
                {
                    if(ifpossible(grid,i-1,j))
                    {
                        mat[i-1][j]=2;
                    }
                    if(ifpossible(grid,i,j-1))
                    {
                        mat[i][j-1]=2;
                    }
                    if(ifpossible(grid,i,j+1))
                    {
                        mat[i][j+1]=2;
                    }
                    if(ifpossible(grid,i+1,j))
                    {
                        mat[i+1][j]=2;
                    }
                }
            }
        }
        return mat;
    }
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int count=0,r=grid.size(),c=grid[0].size();
        int last=INT_MAX;
        while(true)
        {
            int number_of_ones=0;
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    if(grid[i][j]==1)
                    {
                        number_of_ones++;
                    }
                }
            }
            if(number_of_ones==0){break;}
            if(number_of_ones==last){return -1;}//not possible to rot all oranges
            last=number_of_ones;
            grid=rotting(grid);
            count++;
        }
        return count;
    }
};


