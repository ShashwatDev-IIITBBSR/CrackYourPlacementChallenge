class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        int i,j,n=nums.size(),l,r;
        long long cur_sum;//Few extreme test cases take it as long long
        vector<int>v(4);
        vector<vector<int>>vec;
        if(n<4){return vec;}
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++)
        {
            if(i>0&&nums[i]==nums[i-1]){continue;}//Avoid repetition
            v[0]=nums[i];
            for(j=i+1;j<n;j++)
            {
                if(j>i+1&&nums[j]==nums[j-1]){continue;}//Avoid repetition
                v[1]=nums[j];
                l=j+1;
                r=n-1;
                while(l<r)
                {
                    cur_sum=(long long)nums[l]+nums[r]+nums[i]+nums[j];
                    if(cur_sum==target)
                    {
                        v[2]=nums[l];v[3]=nums[r];vec.push_back(v);
                        l++;
                        while(l<r&&nums[l-1]==nums[l]){l++;}//Avoid repetition
                    }
                    else if(cur_sum>target){r--;}
                    else{l++;}
                }
            }
        }
        return vec;
    }
};
