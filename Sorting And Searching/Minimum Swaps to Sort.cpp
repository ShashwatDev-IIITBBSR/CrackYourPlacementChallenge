class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array.
    void swap(vector<pair<int,int>> &v,int i,int j)
    {
        pair<int,int> temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
	int minSwaps(vector<int>&nums)
	{
	    vector<pair<int,int>>vec(nums.size());
	     for(int i=0;i<nums.size();i++){vec[i].first=nums[i];vec[i].second=i;}
	    int count=0;
	    sort(vec.begin(),vec.end());
	    for(int i=0;i<nums.size();i++)
	    {
	        if(i==vec[i].second){continue;}
	        swap(vec,vec[i].second,i);
	        count++;
	        i--;
	    }
        return count;
	}
};
