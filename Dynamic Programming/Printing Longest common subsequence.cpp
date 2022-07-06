vector<int> longestCommonSubsequence(vector<int> a, vector<int> b)
{
    int i,j,n=a.size(),m=b.size();
    int mat[n+1][m+1];
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<m+1;j++)
        {
            if(i==0||j==0){mat[i][j]=0;continue;}
            if(a[i-1]==b[j-1])
            {
                mat[i][j]=1+mat[i-1][j-1];
            }
            else
            {
                mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
            }
        }
    }
    i=n;
    j=m;
    vector<int>vec;
    while(mat[i][j]!=0)
    {
        if(a[i-1]==b[j-1])
        {
            vec.push_back(a[i-1]);
            i--;
            j--;
        }
        else
        {
            if(mat[i-1][j]>mat[i][j-1]){i--;}
            else{j--;}
        }
    }
    reverse(vec.begin(),vec.end());
    return vec;
}