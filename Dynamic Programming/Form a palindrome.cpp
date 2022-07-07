class Solution{
  public:
    int countMin(string str)
    {
        int n=str.size(),i,j;
        string s=str;
        reverse(s.begin(),s.end());
        int mat[n+1][n+1];
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<n+1;j++)
            {
                if(i==0||j==0){mat[i][j]=0;}
                else if(str[i-1]==s[j-1])
                {
                    mat[i][j]=1+mat[i-1][j-1];
                }
                else
                {
                    mat[i][j]=max(mat[i][j-1],mat[i-1][j]);
                }
            }
        }
        return n-mat[n][n];
    
    }
};