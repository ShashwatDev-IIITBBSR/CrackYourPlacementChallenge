class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>>vec;
        vector<int>v(3);
        int i,n=nums.size();
        sort(nums.begin(),nums.end());    
        int start,end,target;
        i=0;
        while(i<n)
        {
            if(i>0&&nums[i-1]==nums[i]){i++;continue;}
            //2 sum in sorted array
            start=i+1;
            end=n-1;
            v[2]=nums[i];
            while(start<n &&end>i &&start<end)
            {
                target=nums[start]+nums[end]+nums[i];
                if(target==0)
                {
                    v[0]=nums[start];v[1]=nums[end];vec.push_back(v);
                    start++;
                    while(nums[start-1]==nums[start]&& start<end){start++;}
                }
                else if(target>0)
                {
                    end--;
                }
                else{start++;}
            }
            i++;
        }
        return vec;
    }
};
