class Solution {
public:
    int k=-1;
    void binary_search(vector<int>& nums, int target,int start,int end)
    {
        int mid=(start+end)/2;
        if(start==mid)
        {
            if(nums[start]==target){k=start;}
            else if(nums[end]==target){k=end;}
            return;
        }
        if(nums[mid]==target){k=mid;}
        else if(nums[mid]<target){binary_search(nums,target,mid,end);}
        else{binary_search(nums,target,start,mid);}
    }
    int search(vector<int>& nums, int target) 
    {
        binary_search(nums,target,0,nums.size()-1);
        return k;
    }
};