class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    int m=M;
	    int n=V;
        int mat[m+1][n+1];
        int i,j;
        for(i=0;i<m+1;i++)
        {
            for(j=0;j<n+1;j++)
            {
                if(i==0&&j==0){mat[i][j]=0;continue;}
                if(i==0){mat[i][j]=INT_MAX -1 ;continue;}
                if(j==0){mat[i][j]=0;continue;}
                if(coins[i-1]<=j)
                {
                    mat[i][j]=min(mat[i][j-coins[i-1]]+1,mat[i-1][j]);
                }
                else
                {
                    mat[i][j]=mat[i-1][j];
                }
            }
        }
        if(mat[M][V]>=INT_MAX-1)
        {
            return -1;
        }
        return mat[M][V];
	} 
	  
};
