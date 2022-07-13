class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int sum=0,n,min_val=nums[0];
        n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            min_val=min(nums[i],min_val);
        }
        sum=sum-(n*min_val);
        return sum;
    }
};
