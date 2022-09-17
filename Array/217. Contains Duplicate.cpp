class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int>uset;
        for(int i=0;i<nums.size();i++)
        {
            if(uset.find(nums[i])!=uset.end())
            {
                return 1;
            }
            uset.insert(nums[i]);
        }
        return 0;
    }
};