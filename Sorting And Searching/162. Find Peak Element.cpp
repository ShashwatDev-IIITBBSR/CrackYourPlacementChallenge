//O(logn) solution
class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1){return 0;}
        int start=0,end=n-1,mid;
        if(nums[0]>nums[1]){return 0;}
        if(nums[n-1]>nums[n-2]){return n-1;}
        while(start<end)
        {
            mid=(start+end)/2;
            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1])
            {
                return mid;
            }
            else if(nums[mid]>nums[mid-1]&&nums[mid]<nums[mid+1])
            {
                start=mid;
            }
            else
            {
                end=mid;
            }
            
        }
        return -1;
    }
};
//O(n) solution
class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1){return 0;}
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1])
            {
                return i;
            }
        }
        if(nums[0]>nums[1]){return 0;}
        if(nums[n-1]>nums[n-2]){return n-1;}
        return -1;
    }
};