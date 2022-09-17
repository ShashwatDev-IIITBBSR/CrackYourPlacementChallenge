class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int product=1;
        for(auto x:nums)
        {
            product=product*x;
        }
        vector<int>vec;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                int p=1;
                for(int j=0;j<n;j++)
                {
                    if(j!=i){p=p*nums[j];}
                }
                vec.push_back(p);
            }
            else
            {
                vec.push_back(product/nums[i]);
            }
        }
        return vec;
    }
};
