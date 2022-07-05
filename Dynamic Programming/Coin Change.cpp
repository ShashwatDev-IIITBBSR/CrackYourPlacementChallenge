class Solution {
  public:
    long long int count(int S[], int m, int n) 
    {
        long long int mat[m+1][n+1];
        int i,j;
        for(i=0;i<m+1;i++)
        {
            for(j=0;j<n+1;j++)
            {
                if(i==0&&j==0){mat[i][j]=1;continue;}
                if(i==0){mat[i][j]=0;continue;}
                if(j==0){mat[i][j]=1;continue;}
                if(S[i-1]<=j)
                {
                    mat[i][j]=mat[i][j-S[i-1]]+mat[i-1][j];
                }
                else
                {
                    mat[i][j]=mat[i-1][j];
                }
            }
        }
        return mat[m][n];
    }
};