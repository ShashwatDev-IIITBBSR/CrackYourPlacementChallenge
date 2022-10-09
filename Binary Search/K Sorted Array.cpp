class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k)
    {
        unordered_map<int,int>umap;
        for(int i=0;i<n;i++)
        {
            umap[arr[i]]=i;
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            int x=arr[i];
            int d=abs(i-umap[x]);
            if(d>k){return "No";}
        }
        return "Yes";
        //code here.
    }
};