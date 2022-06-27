class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        stack<int>st;
        vector<int>vec(n);
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
            {
                st.push(arr[i]);
                vec[i]=-1;
                continue;
            }
            while(!st.empty()&&st.top()>=arr[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                vec[i]=-1;
            }
            else
            {
                vec[i]=st.top();
            }
            st.push(arr[i]);
        }
        return vec;
    } 
};