class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) 
    {
        int max_i,min_i,result,i;
        sort(arr,arr+n);
        result=arr[n-1]-arr[0];
        for(i=1;i<n;i++)
        {
            if(arr[i]>=k)
            {
                max_i=max(arr[n-1]-k,arr[i-1]+k);
                min_i=min(arr[0]+k,arr[i]-k);
                result=min(result,max_i-min_i);
            }
        }
        return result;
    }
};