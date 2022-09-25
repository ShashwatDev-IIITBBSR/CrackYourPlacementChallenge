int diagonalDifference(vector<vector<int>> arr) 
{
    int n=arr.size();
    int d1=0,d2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j){d1+=arr[i][j];}
            if(i+j==n-1){d2+=arr[i][j];}
        }
    }
    return max(d1-d2,d2-d1);
}
