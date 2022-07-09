class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) 
    {
        int nrows=matrix.size();
        int ncols=matrix[0].size();
        int dp[nrows][ncols];
        int maxi=0;
        for(int i=0;i<nrows;i++)
        {
            for(int j=0;j<ncols;j++)
            {
                if(i==0||j==0)
                {
                     if(matrix[i][j]=='0'){dp[i][j]=0;}
                     else{dp[i][j]=1;maxi=max(1,maxi);}
                }
                else if(matrix[i][j]=='0'){dp[i][j]=0;}
                else if(matrix[i-1][j]=='0'||matrix[i-1][j-1]=='0'||matrix[i][j-1]=='0')
                {
                    if(matrix[i][j]=='0'){dp[i][j]=0;}
                    else{dp[i][j]=1;maxi=max(1,maxi);}
                }
                else
                {
                    dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
                    maxi=max(maxi,dp[i][j]);
                }
            }
        }
        return maxi*maxi;
    }
};