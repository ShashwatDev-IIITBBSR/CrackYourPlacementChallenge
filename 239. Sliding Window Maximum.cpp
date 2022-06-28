class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        deque<int>dq;
        int i,n=nums.size();
        vector<int>vec;
        for(i=0;i<n;i++)
        {
            if(i<k-1)
            {
                if(dq.empty()){dq.push_back(i);continue;}
                while(!dq.empty()&&nums[dq.back()]<nums[i])
                {
                    dq.pop_back();
                }
                dq.push_back(i);
            }
            else
            {
                if(dq.front()==i-k){dq.pop_front();}
                while(!dq.empty()&&nums[dq.back()]<nums[i])
                {
                    dq.pop_back();
                }
                dq.push_back(i);
                vec.push_back(nums[dq.front()]);
            }
        }
        return vec;
    }
};
    