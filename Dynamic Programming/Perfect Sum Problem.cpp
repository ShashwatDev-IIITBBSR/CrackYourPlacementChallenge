class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
	    int i,j,mat[n+1][sum+1];
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<sum+1;j++)
            {
                if(j==0&&i==0){mat[i][j]=1;continue;}
                else if(i==0){mat[i][j]=0;continue;}
                //else if(j==0){mat[i][j]=1;continue;}//strictly comment it out
                if(arr[i-1]<=j)
                {
                    mat[i][j]=((mat[i-1][j])%1000000007+(mat[i-1][j-arr[i-1]])%1000000007)%1000000007;
                }
                else
                {
                    mat[i][j]=mat[i-1][j]%1000000007;
                }
            }
        }
        return mat[n][sum];
	}
	  
};