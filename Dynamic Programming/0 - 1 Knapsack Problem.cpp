class Solution
{
public:
    int knapSack(int W, int wt[], int val[], int n) 
    {
        int mat[1001][1001],i,j;
        for(i=0;i<n+1;i++)//val
        {
            mat[i][0]=0;
        }
        for(i=0;i<W+1;i++)//val
        {
            mat[0][i]=0;
        }
        for(i=1;i<n+1;i++)//val
        {
            for(j=1;j<W+1;j++)//weight
            {
                if(wt[i-1]<=j)
                {
                    mat[i][j]=max(val[i-1]+mat[i-1][j-wt[i-1]],mat[i-1][j]);
                }
                else
                {
                    mat[i][j]=mat[i-1][j];
                }
            }
        }
        return mat[n][W];
    }
};
    
    
    
    
    
    //Method 2
    
    //vector<vector<int>>mat(1001,vector<int>(1001,-1));
    /*int mat[1001][1001];
    //Function to return max value that can be put in knapsack of capacity W.
    int Solve(int W, int wt[], int val[], int n) 
    { 
       if(W==0||n==0)
       {
           return 0;
       }
       if(mat[W][n]!=-1)
       {
           return mat[W][n];
       }
       if(W>=wt[n-1])
       {
           mat[W][n]= max(val[n-1]+Solve(W-wt[n-1],wt,val,n-1),Solve(W,wt,val,n-1));
       }
       else
       {
           mat[W][n]=Solve(W,wt,val,n-1);
       }
       return mat[W][n];
    }
    int knapSack(int W, int wt[], int val[], int n) 
    {
        memset(mat,-1,sizeof(mat));
        return Solve(W,wt,val,n);
    }*/
        