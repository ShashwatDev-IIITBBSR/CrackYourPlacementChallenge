class Solution{
  public:
    int longestPalinSubseq(string A) 
    {
        string B=A;
        reverse(B.begin(),B.end());
        int n=A.size(),i,j;
        int mat[n+1][n+1];
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<n+1;j++)
            {
                if(i==0||j==0){mat[i][j]=0;}
                else if(A[i-1]==B[j-1])
                {
                    mat[i][j]=1+mat[i-1][j-1];
                }
                else
                {
                    mat[i][j]=max(mat[i][j-1],mat[i-1][j]);
                }
            }
        }
        return mat[n][n];
    }
};