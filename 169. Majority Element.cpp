class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int>umap;
        int n=(nums.size())/2;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;
            if(umap[nums[i]]>n)
                {
                    return nums[i];
                }
         }
        
        return 0;
    }
};