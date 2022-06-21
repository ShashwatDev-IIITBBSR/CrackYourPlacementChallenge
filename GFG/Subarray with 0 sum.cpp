class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_set <int>uset;
        int presum=0,k;
        for(int i=0;i<n;i++)
        {
            k=arr[i];
            presum=presum+k;
            if(presum==0||uset.count(presum))
            {
                return true;
            }
            uset.insert(presum);
        }
        return false;
    }
};