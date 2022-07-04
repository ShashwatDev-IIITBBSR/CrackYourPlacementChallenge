class Solution{   
public:
//Method 1
    bool isSubsetSum(vector<int>arr, int sum)
    {
        int n=arr.size();
        int w=sum;
        bool mat[n+1][w+1];
        int i,j;
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<w+1;j++)
            {
                if(j==0){mat[i][j]=true;continue;}
                else if(i==0){mat[i][j]=false;continue;}
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
        return mat[n][w];
    }
        
    //Method 2      
        
        
    /*int mat[101][10001];
    bool recursion(vector<int>arr, int n,int w)
    {
        if(w==0||n==0)
        {
            return 0;
        }
        if(mat[n][w]!=-1){return mat[n][w];}
        if(arr[n-1]<w)
        {
            mat[n][w]=recursion(arr,n-1,w-arr[n-1])||recursion(arr,n-1,w);
            return mat[n][w];
        }
        else if(arr[n-1]==w){mat[n][w]=1;return 1;}
        else
        {
            mat[n][w]=recursion(arr,n-1,w);
            return mat[n][w];
        }
    }
    bool isSubsetSum(vector<int>arr, int sum)
    {
        memset(mat,-1,sizeof(mat));
        return recursion(arr,arr.size(),sum);
    }*/
};