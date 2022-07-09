class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        int mat[m][n],i,j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==0||j==0){mat[i][j]=1;}
                else
                {
                    mat[i][j]=mat[i-1][j]+mat[i][j-1];
                } 
            }
        }
        return mat[m-1][n-1];
    }
};