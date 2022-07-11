class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int curr_sum=0;
        for(int i=0;i<n;i++)
        {
            curr_sum+=(i+1)-nums[i];
        }
        return curr_sum;
    }
};


//Similar Approach but it takes less time
//Using Maths formula 
//1+2+3+....+n=n(n+1)/2;
/*
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int total_sum=(n*(n+1))/2;//sum from 0 to n numbers
        int curr_sum=0;
        for(int i=0;i<n;i++)
        {
            curr_sum+=nums[i];
        }
        return total_sum-curr_sum;
    }
};*/

/*