class Solution{
public:
    vector<int> leftSmaller(int n, int a[])
    {
        vector<int>res;
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&&st.top()>=a[i])
            {
                st.pop();
            }
            if(st.empty()){res.push_back(-1);}
            else{res.push_back(st.top());}
            st.push(a[i]);
        }
        return res;
        // code here
    }
};
