class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int mat[201][201];
    int solve(int e,int f)
    {
        if(e==1||f<=1){return f;}
        if(mat[e][f]!=-1){return mat[e][f];}
        int temp,mn=INT_MAX;
        for(int k=1;k<=f;k++)
        {
            temp=1+max(solve(e-1,k-1),solve(e,f-k));
            mn=min(mn,temp);
        }
        return mat[e][f]=mn;
    }
    int eggDrop(int n, int k) 
    {
        memset(mat,-1,sizeof(mat));
        return solve(n,k);
    }
};
