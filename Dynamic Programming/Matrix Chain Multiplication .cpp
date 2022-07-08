class Solution{
public:
    int mat[101][101];
    int solve(int arr[],int i,int j)
    {
        if(i>=j){return 0;}
        if(mat[i][j]!=-1){return mat[i][j];}
        int temp_ans;
        int min_val= INT_MAX; 
        for(int k=i;k<=j-1;k++)
        {
            temp_ans=solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
             min_val=min(temp_ans,min_val);
        }
        return mat[i][j]=min_val;
    }
    int matrixMultiplication(int N, int arr[])
    {
        memset(mat,-1,sizeof(mat));
        return solve(arr,1,N-1);
    }
};
