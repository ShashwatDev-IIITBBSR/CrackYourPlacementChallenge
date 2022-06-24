class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    { 
        vector<int> vec;
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++)
        {
            if(umap.find(target-nums[i])!=umap.end())
            {
                vec.push_back(umap.find(target-nums[i])->second);
                vec.push_back(i);
                return vec;
            }
            umap[nums[i]]=i;
        }
        return vec;
    }   
};        
   