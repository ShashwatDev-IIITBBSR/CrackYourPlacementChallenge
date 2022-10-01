class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        int res,i=0,n=nums.size();
        res=nums[0]+nums[1]+nums[2];
        int min_dis=abs(res-target);
        while(i<n)
        {
            int l=i+1,h=n-1;
            while(l<h)
            {
                int s=nums[l]+nums[h]+nums[i];
                int d=abs(s-target);
                if(d<min_dis){res=s;}
                if(l<h&&s<target){l++;}
                else if(l<h&&s>target){h--;}
                else{return s;}
            }
            i++;
        }
        return res;
    }
};