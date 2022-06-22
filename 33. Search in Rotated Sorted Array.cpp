class Solution {
public:
    int k=-1;
    void Binary_search(vector<int> nums, int target,int start,int end)
    {
        int mid=(start+end)/2;
        if(target==nums[mid]){k=mid;return;}
        else if(target==nums[start]){k=start;return;}
        else if(target==nums[end]){k=end;return;}
        if(end-start<=2){return;}
        if(nums[mid]>nums[start])
        {
            if(nums[mid]>target && nums[start]<target){Binary_search(nums,target,start,mid-1);}
            else{Binary_search(nums,target,mid+1,end);}
        }
        else
        {
            if(target<nums[mid]){Binary_search(nums,target,start,mid-1);}
            else if (target>nums[start]){Binary_search(nums,target,start,mid-1);}
            else{Binary_search(nums,target,mid+1,end);}
        }
    }
    int search(vector<int>& nums, int target) 
    {
        Binary_search(nums,target,0,nums.size()-1);
        return k;
    }
};