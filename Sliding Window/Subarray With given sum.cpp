class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int>vec;
        int i=0,l=0;
        long long sum=0;
        while(i<n)
        {
            sum+=arr[i];
            if(sum>s)
            {
                while(l<i&&sum>s)
                {
                    sum=sum-arr[l];
                    l++;
                }
            }
            if(sum==s)
            {
                vec.push_back(l+1);
                vec.push_back(i+1);
                return vec;
            }
            i++;
        }
        vec.push_back(-1);
        return vec;
        // Your code here
    }
};