class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
	    unordered_set<int>uset;
		for(int i=0;i<n;i++)
		{
		    uset.insert(arr[i]);
		}
		for(int i=A;i<=B;i++)
		{
		    if(!(uset.find(i)!=uset.end()))
		    {
		        return false;
		    }
		}
		return true;
	}
};