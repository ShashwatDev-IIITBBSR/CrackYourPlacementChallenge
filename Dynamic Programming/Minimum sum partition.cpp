class Solution{

  public:
	int minDifference(int arr[], int n)  
	{
	    int i,j,sum=0,w,diff;
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        w=sum/2;
        bool mat[n+1][w+1];
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<w+1;j++)
            {
                if(j==0){mat[i][j]=1;continue;}
                if(i==0){mat[i][j]=0;continue;}
                if(arr[i-1]<=j)
                {
                    mat[i][j]=mat[i-1][j]||mat[i-1][j-arr[i-1]];
                }
                else
                {
                    mat[i][j]=mat[i-1][j];
                }
            }
        }
        diff=0;
        i=n;j=w;
        while((i>=0)&&(j>=0)&&(mat[i][j]==0))
        {
            j--;
            diff++;
        }
        if(sum%2==0)
        {
            return diff*2;
        }
        else
        {
            return diff*2+1;
        }
	} 
};