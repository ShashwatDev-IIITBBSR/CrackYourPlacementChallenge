class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        stack<pair<int,int>>st;//First int for number and second for index
        int n=nums.size();
        vector<int>vec(n,-1);//It's important to initialize with -1 because for greatest element like for [1,2,1] we want output to be [2,-1,2] not [2,0,2].
        for(int i=0;i<n;i++)
        {
            if(st.empty()){st.push({nums[i],i});continue;}
            
            while(!st.empty()&& st.top().first<nums[i])
            {
                vec[st.top().second]=nums[i];
                st.pop();
            }
            st.push({nums[i],i});
        }
        for(int i=0;i<n;i++)
        {
            if(st.empty()){break;}
            
            while(!st.empty()&& st.top().first<nums[i])
            {
                vec[st.top().second]=nums[i];
                st.pop();
            }
        }
        return vec;
    }
};