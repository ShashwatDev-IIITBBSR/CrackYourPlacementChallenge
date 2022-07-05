class Solution {
public:

    int longestCommonSubsequence(string text1, string text2) 
    {
        int n=text1.size(),m=text2.size(),i,j;
        int mat[n+1][m+1];
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<m+1;j++)
            {
                if(i==0||j==0){mat[i][j]=0;continue;}
                if(text1[i-1]==text2[j-1])
                {
                    mat[i][j]=1+mat[i-1][j-1];
                }
                else
                {
                    mat[i][j]=max(mat[i][j-1],mat[i-1][j]);
                }
            }
        }
        return mat[n][m];    
        
    }
};
//correct code but shows time limit error
  /*  int mat[1001][1001];
    int recursion(string S1, string S2, int n, int m)
    {
        if(n==0||m==0)
        {
            return 0;
        }
        if(mat[n][m]!=-1)
        {
            return mat[n][m];
        }
        if(S1[n-1]==S2[m-1])
        {
            mat[n][m]=1+recursion(S1,S2,n-1,m-1);
            return mat[n][m];
        }
        else
        {
            mat[n][m]=max(recursion(S1,S2,n,m-1),recursion(S1,S2,n-1,m));
            return mat[n][m];
        }
    }
    return recursion(text1,text2,text1.size(),text2.size());*/