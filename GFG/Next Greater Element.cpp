class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        stack<pair<long long,int>> st;//one for number and other for index
        vector<long long> vec(n);
        int top_element;
        for(int i=0;i<n;i++)
        {
            if(st.empty()){st.push({arr[i],i});continue;}
            while(!st.empty()&&(st.top().first<arr[i]))
            {
                vec[st.top().second]=arr[i];
                st.pop();
            }
            st.push({arr[i],i});
        }
        while(!st.empty())
        {
            vec[st.top().second]=-1;
            st.pop();
        }
        return vec;
    }
};