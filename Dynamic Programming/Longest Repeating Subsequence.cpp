class Solution {
	public:
		int LongestRepeatingSubsequence(string str)
		{
		    int i,j,n=str.size();
		    int mat[n+1][n+1];
		    for(i=0;i<n+1;i++)
		    {
		        for(j=0;j<n+1;j++)
		        {
		            if(i==0||j==0){mat[i][j]=0;}
		            else if(str[i-1]==str[j-1]&&i!=j)
		            {mat[i][j]=1+mat[i-1][j-1];}
		            else
		            {mat[i][j]=max(mat[i][j-1],mat[i-1][j]);}
		        }
		    }
		    return mat[n][n];
		}

};