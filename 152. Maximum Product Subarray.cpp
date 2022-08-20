class Solution {
public:
    int maxi=INT_MIN;
    void recursion(vector<int>&nums,int product,int index,int n_negative)
    {
        int n=nums.size();
        if(index==n){return;}
        maxi=max(maxi,max(nums[index],nums[index]*product));
        if(nums[index]!=0){recursion(nums,product*nums[index],index+1,n_negative);}
        else 
        {
            recursion(nums,1,index+1,0);
        }
    }
    void nrecursion(vector<int>&nums,int product,int index,int n_negative)
    {
        if(index<0){return;}
        maxi=max(maxi,max(nums[index],nums[index]*product));
        if(nums[index]!=0){nrecursion(nums,product*nums[index],index-1,n_negative);}
        else 
        {
            nrecursion(nums,1,index-1,0);
        }
    }   
    int maxProduct(vector<int>& nums) 
    {
        recursion(nums,1,0,0);
        nrecursion(nums,1,nums.size()-1,0);
        return maxi;
    }
};