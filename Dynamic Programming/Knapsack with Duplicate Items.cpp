// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
//Top Down
    int mat[1001][1001];
    int Recursion(int n, int w, int val[], int wt[])
    {
        if(n==0||w==0)
        {
            mat[n][w]=0;
            return 0;
        }
        if(mat[n][w]!=-1)
        {
            return mat[n][w];
        }
        if(wt[n-1]<=w)
        {
            return mat[n][w]=max(val[n-1]+Recursion(n,w-wt[n-1],val,wt),Recursion(n-1,w,val,wt));
            //max(val[n-1]+mat[n-1][w-wt[n-1]],mat[n-1][w])
        }
        else
        {
            return mat[n][w]=Recursion(n-1,w,val,wt);
        }
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        memset(mat,-1,sizeof(mat));
        return Recursion(N,W,val,wt);
    }
    
   //Bottom Up 
    
    /*int knapSack(int N, int W, int val[], int wt[])
    {
        int i,j;
        int mat[N+1][W+1];
        for(i=0;i<N+1;i++)
        {
            for(j=0;j<W+1;j++)
            {
                if(i==0||j==0)
                {
                    mat[i][j]=0;
                    continue;
                }
                if(wt[i-1]<=j)
                {
                    mat[i][j]=max(val[i-1]+mat[i][j-wt[i-1]],mat[i-1][j]);
                }
                else
                {
                    mat[i][j]=mat[i-1][j];
                }
            }
        }
        return mat[N][W];
    }*/
};
