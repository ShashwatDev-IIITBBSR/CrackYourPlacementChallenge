class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long last_max,next_max;
        int i;
        vector<long long> last_greatest(n),next_greatest(n);
        last_max=arr[0];
        long long water_collected=0;
        for(i=0;i<n;i++)
        {
            if(last_max<arr[i])
            {
                last_max=arr[i];
            }
            last_greatest[i]=last_max;
        }
        next_max=arr[n-1];
        for(i=n-1;i>=0;i--)
        {
            if(next_max<arr[i])
            {
                next_max=arr[i];
            }
            next_greatest[i]=next_max;
        }        
        for(i=0;i<n;i++)
        {
            water_collected+=min(last_greatest[i],next_greatest[i])-arr[i];
        }
        return water_collected;
    }
};