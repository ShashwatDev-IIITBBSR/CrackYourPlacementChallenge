class Solution{   
public:  
    int mat[101][10001];
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
    }
};