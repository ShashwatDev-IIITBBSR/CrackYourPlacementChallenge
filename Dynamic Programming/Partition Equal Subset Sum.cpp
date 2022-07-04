class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        int i,j,sum=0;
        for( i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        if(sum%2!=0){return false;}
        int w=sum/2;
        int mat[N+1][w+1];
        for(i=0;i<N+1;i++)
        {
            for(j=0;j<w+1;j++)
            {
                //if(i==0&&j==0){mat[i][j]=1;continue;}
                if(j==0){mat[i][j]=1;continue;}
                else if(i==0){mat[i][j]=0;continue;}
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
        return mat[N][w];
    }
};