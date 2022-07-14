class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) 
    {
        vector<long long int> vec;
        long long prod=1;
        for(int i=0;i<n;i++)
        {
            prod=prod*nums[i];
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                 vec.push_back(prod/nums[i]);
            }
            else
            {
                long long a=1;
                for(int j=0;j<i;j++){a=a*nums[j];}
                for(int j=i+1;j<n;j++){a=a*nums[j];}
                vec.push_back(a);
            }
        }
        return vec;
    }
};