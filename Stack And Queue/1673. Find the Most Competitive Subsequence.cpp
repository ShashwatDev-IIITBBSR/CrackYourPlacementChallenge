//Monotonic Increasing Stack
class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) 
    {
        vector<int>vec;
        stack<int>st;
        int i,n=nums.size();
        int remove=n-k;//Number of elements to remove
        for(i=0;i<n;i++)
        {
             while(!st.empty()&& st.top()>nums[i] && remove>0)
                {
                    st.pop();
                    remove--;
                }
                st.push(nums[i]);
        }
        while(remove>0)
        {
             st.pop();
             remove--;            
        }
        while(!st.empty())
        {
            vec.push_back(st.top());
            st.pop();
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};