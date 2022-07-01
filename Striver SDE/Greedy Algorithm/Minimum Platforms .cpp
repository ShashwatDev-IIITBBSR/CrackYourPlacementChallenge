class Solution{
public:   
    int findPlatform(int arr[], int dep[], int n)
    {
    	int i=0,j=0,max_platform=0,curr_occupied_platform=0;
    	sort(dep,dep+n);
    	sort(arr,arr+n);
    	while(i<n)
    	{
    	    if(dep[j]<arr[i])//Train Departing
    	    {
    	        curr_occupied_platform--;
    	        j++;
    	    }
    	    else//Train Arriving
    	    {
    	        curr_occupied_platform++;
    	        i++;
    	        max_platform=max(max_platform,curr_occupied_platform);
    	    }
    	}
    	return max_platform;
    }
};
    