class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        stack <int> st;
        vector <int> temp(temperatures.size());
        int s,i;
        s=temperatures.size();
        for(i=0;i<s;i++)
        {
            while(st.empty()&& temperatures[st.top()]<=temperatures[i])
            {
                temp[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return temp;
    } 
};