class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        int product;
        int maxi;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        product=nums[n-1]*nums[n-2]*nums[n-3];//Last 3 numbers after sorting
        maxi=product;
        product=nums[n-1]*nums[0]*nums[1];//For case of 2 most negative and 1 most positive number
        maxi=max(product,maxi);
        return maxi;
    }
};