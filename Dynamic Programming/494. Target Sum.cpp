class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) 
    {
        int sum=0,i,j,n=nums.size(),count=0;
        if(target<0){target=-target;}
        for(i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int w;
        if(target>sum)
        {
            return 0;
        }
        w=sum;
        int mat[n+1][w+1];
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<w+1;j++)
            {
                if(i==0&j==0){mat[i][j]=1;continue;}
                else if(i==0){mat[i][j]=0;continue;}
                //else if(j==0){mat[i][j]=1;continue;}//Strictly don't use this  
                if(nums[i-1]<=j)
                {
                    mat[i][j]=mat[i-1][j-nums[i-1]]+mat[i-1][j];
                }
                else
                {
                    mat[i][j]=mat[i-1][j];
                }
            }
        }
        //Above code is similar to count of subsets with given sum 
        if((target+sum)%2==1){return 0;}
        int k=(target+sum)/2;
        return mat[n][k];
    }
};