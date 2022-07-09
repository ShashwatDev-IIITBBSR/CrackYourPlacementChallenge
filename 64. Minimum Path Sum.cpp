class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        int mat[n][m];
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i==0&&j==0){mat[0][0]=grid[0][0];}
                else if(i==0){mat[0][j]=mat[0][j-1]+grid[0][j];}
                else if(j==0){mat[i][0]=mat[i-1][0]+grid[i][0];}
                else
                {
                    mat[i][j]=min(mat[i-1][j],mat[i][j-1])+grid[i][j];
                }
            }
        }
        return mat[n-1][m-1];
    }
};