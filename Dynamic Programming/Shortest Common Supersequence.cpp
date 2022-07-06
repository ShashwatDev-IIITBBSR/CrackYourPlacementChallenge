//Give length of Shortest Common Supersequence 
class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        int i,j,mat[m+1][n+1];
        for(i=0;i<m+1;i++)
        {
            for(j=0;j<n+1;j++)
            {
                if(i==0||j==0){mat[i][j]=0;continue;}
                if(X[i-1]==Y[j-1]){mat[i][j]=1+mat[i-1][j-1];}
                else{mat[i][j]=max(mat[i-1][j],mat[i][j-1]);}
            }
        }
        return m+n-mat[m][n];
    }
};
