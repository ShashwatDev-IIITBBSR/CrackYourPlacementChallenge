class Solution{
    public:
	int minOperations(string str1, string str2) 
	{ 
	    int n=str1.size();
	    int m=str2.size();
	    int i,j,mat[n+1][m+1];
	    for(i=0;i<n+1;i++)
	    {
	        for(j=0;j<m+1;j++)
	        {
	            if(i==0||j==0){mat[i][j]=0;continue;}
	            if(str1[i-1]==str2[j-1])
	            {
	                mat[i][j]=1+mat[i-1][j-1];
	            }
	            else
	            {
	                mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
	            }
	        }
	    }
	    return m+n-2*mat[n][m];
	} 
};