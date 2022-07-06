class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) 
    {
        int n1=nums1.size(),n2=nums2.size(),i,j;
        int mat[n1+1][n2+1];
        int maxi=0;
        for(i=0;i<n1+1;i++)
        {
            for(j=0;j<n2+1;j++)
            {
                if(i==0||j==0){mat[i][j]=0;continue;}
                if(nums1[i-1]==nums2[j-1])
                {
                    mat[i][j]=1+mat[i-1][j-1];
                    maxi=max(maxi,mat[i][j]);
                }
                else
                {
                    mat[i][j]=0;
                }
            }
        }
        return maxi;
    }
};
//Brute Force
        /*int maxi=0,i,j,a,b,len;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(S1[i]==S2[j])
                {
                    a=i+1,b=j+1;
                    len=1;
                    while(a<n&&b<m&&S1[a]==S2[b])
                    {
                        len++;
                        a++;
                        b++;
                    }
                    maxi=max(maxi,len);
                }
            }
        }
        return maxi;*/