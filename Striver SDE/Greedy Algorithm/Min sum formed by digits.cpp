class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        sort(arr,arr+n);
        long long int n1=0,n2=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                n1=n1*10+arr[i];
            }
            else
            {
                n2=n2*10+arr[i];
            }
        }
        return n1+n2;
    }
};