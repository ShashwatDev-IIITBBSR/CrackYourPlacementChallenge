//Ordered Set
class Solution {
public:
    set<int> sort(vector<int>& nums)
    {
        set<int> uset;
        for(int i=0;i<nums.size();i++)
        {
            uset.insert(nums[i]);
        }
        return uset;
    }
    int maximumGap(vector<int>& nums) 
    {
        if(nums.size()<=1){return 0;}
        set<int> uset;
        int temp;
        uset=sort(nums);
        int diff=0;
        int last=nums[0];
        for(auto x:uset)
        {
            temp=x-last;
            if(temp>diff)
            {
                diff=temp;
            }
            last=x;
        }
        return diff;
    }
};
/*//Ordered Map
class Solution {
public:
    map<int,int> sort(vector<int>& nums)
    {
        map<int,int> umap;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;
        }
        return umap;
    }
    int maximumGap(vector<int>& nums) 
    {
        if(nums.size()<=1){return 0;}
        map<int,int> umap;
        int temp;
        umap=sort(nums);
        int diff=0;
        int last=nums[0];
        for(auto x:umap)
        {
            temp=x.first-last;
            if(temp>diff)
            {
                diff=temp;
            }
            last=x.first;
        }
        return diff;
    }
};*/