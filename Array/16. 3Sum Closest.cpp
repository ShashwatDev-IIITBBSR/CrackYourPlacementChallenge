class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int result=nums[0]+nums[1]+nums[2],l,r,cur_sum,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1]){continue;}
            l=i+1;
            r=n-1;
            while(l<r)
            {
                cur_sum=nums[i]+nums[l]+nums[r];
                if(abs(cur_sum-target)<abs(result-target))
                {
                    result=cur_sum;
                    while(l<r && nums[l] == nums[l+1]) l++;
                    while(l<r && nums[r] == nums[r-1]) r--;
                }
                if(cur_sum==target){return target;}
                else if(cur_sum<target){l++;}
                else{r--;}
            }
        }
        return result;
    }
};














/*class Solution {
public:
    bool recursion(vector<int> nums, int target,unordered_map<int,int>umap )
    {
        int n=nums.size(),i,j,diff;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                umap[nums[i]]--;
                umap[nums[j]]--;
                diff=target-nums[i]-nums[j];
                if(umap[diff]>0)
                {
                    return true;
                }
                umap[nums[i]]++;
                umap[nums[j]]++;                
            }
        }
        return false;
    }
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int n=nums.size(),i;
        unordered_map<int,int>umap;
        for(i=0;i<n;i++)
        {
            umap[nums[i]]++;
        }
        i=0;
        while(true)
        {
            if(i==0)
            {
                if(recursion(nums,target,umap)){return target;}
            }
            else
            {
                if(recursion(nums,target-i,umap)){return target-i;}
                if(recursion(nums,target+i,umap)){return target+i;}
            }
            i++;
        }
        
    }
};*/