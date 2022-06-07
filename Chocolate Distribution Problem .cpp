class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        int i,min_diff,temp;
        i=0;
        sort(a.begin(),a.end());
        min_diff=a[m-1]-a[0];
        for(i=0;i<n-m+1;i++)
        {
            temp=a[i+m-1]-a[i];
            if(temp<min_diff)
            {
                min_diff=temp;
            }
        }
        return min_diff;
    }   
};