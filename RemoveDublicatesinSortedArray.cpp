class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,l,loc=1;
        l=nums.size();
        for(i=1;i<l;i++)
        {
            if (nums[i]!=nums[loc-1])
            {
                nums[loc]=nums[i];
                loc++;
            }
        }
        /*int l,k,i,j;
        l=nums.size();
        k=0;
        for(i=0;i<l-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                k++;
                for(j=i+1;j<l-1;j++)
                {
                    nums[j]=nums[j+1];
                }
                i=i-1;
            }
        }*/
        return loc;
    }
};