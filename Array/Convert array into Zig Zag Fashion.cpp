class Solution{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) 
	{
	    for(int i=0;i<n-1;i++)
	    {
	        if(i%2==0)
	        {
	            if(arr[i]>arr[i+1]){swap(arr[i],arr[i+1]);}
	        }
	        else
	        {
	            if(arr[i+1]>arr[i]){swap(arr[i],arr[i+1]);}
	        }
	    }
	    // code here
	}
};
