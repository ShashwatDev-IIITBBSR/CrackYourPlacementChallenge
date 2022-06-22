class Solution {
public:
    int k=0;
    void BinarySearch(vector<int>& nums,int start,int end)
    {
        int mid=(start+end)/2;
        if(end-start==0)
        {
            k=nums[start];
            return;
        }
        if(end-start==2)
        {
            if(nums[mid]==nums[start]){k=nums[end];return;}
            else{k=nums[start];return;}
        }
        int flag=0;//To check odd or even number of elements in left of middle element
        if(mid%2==1){flag=1;}
        if(nums[mid]==nums[mid-1]&&flag==1)
        {
            BinarySearch(nums,mid+1,end);
        }
        else if (nums[mid]!=nums[mid-1]&&flag==0)
        {
            BinarySearch(nums,mid,end);
        }            
        else if(flag==0)
        {
            BinarySearch(nums,start,mid);
        }
        else
        {
            BinarySearch(nums,start,mid-1);
        }
    }
    int singleNonDuplicate(vector<int>& nums) 
    {
        BinarySearch(nums,0,nums.size()-1);
        return k;
        
    }
};