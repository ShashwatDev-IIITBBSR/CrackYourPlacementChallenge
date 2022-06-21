class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) 
	{
	    unordered_set<int>uset;
	    int j,k;
	    for(int i=0;i<n;i++)
	    {
	        uset.insert(arr[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        k=arr[i];
	        j=x-k;
	        if(j==k)
	        {
	            int count=0;
	            for(int i=0;i<n;i++)
	            {
	                if(arr[i]==j){count++;}
	            }
	            if(count==2){return true;}
	            continue;
	        }
	        if(uset.find(j)!=uset.end())
	        {
	            return true;
	        }
	    }
	    return false;
	}
};