long long countTriplets(long long arr[], int n, long long sum)
	{
	    long long count=0;
	    sort(arr,arr+n);
	    int l,r,i=0;
	    while(i<n)
	    {
	        l=i+1;
	        r=n-1;
	        while(l<r)
	        {
	            int s=arr[i]+arr[l]+arr[r];
	            if(s<sum){count+=r-l;l++;}
	            else{r--;}
	        }
	        i++;
	    }
	    return count;
	}