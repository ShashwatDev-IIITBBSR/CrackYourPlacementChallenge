class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) 
    {
        int sum=0;
        int index;
        if(n==1){return 1;}
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        int present_sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum-a[i];
            if(sum==present_sum){return i+1;}
            present_sum=present_sum+a[i];
        }
        return -1;
    }

};