class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) 
    {
        int count=0,n=nums.size();
        unordered_map<int,int>umap,temp;
        for(auto x:nums)
        {
            umap[x]++;
        }
        for(int i=0;i<n;i++)
        {
            umap[nums[i]]--;
            temp=umap;
            for(int j=i+1;j<n;j++)
            {
                temp[nums[j]]--;
                int d=nums[j]-nums[i];
                if(d==diff&&umap[d+nums[j]]>0){count++;}
            }
        }
        return count;
    }
};
