class Solution{
  public:
    int cutRod(int price[], int n) 
    {
        int i,j,wt[n];
        int mat[n+1][n+1];
        for(i=0;i<n;i++)
        {
            wt[i]=i+1;
        }
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<n+1;j++)
            {
                if(i==0||j==0)
                {
                    mat[i][j]=0;
                    continue;
                }
                if(wt[i-1]<=j)
                {
                    mat[i][j]=max(price[i-1]+mat[i][j-wt[i-1]],mat[i-1][j]);
                }
                else
                {
                    mat[i][j]=mat[i-1][j];
                }
            }
        }
        return mat[n][n];
    }
};



