class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        unordered_map<int,int>umap;
        int c=0;
        for(int i=0;i<n;i++)
        {
            umap[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(umap[arr[i]]==1)
            {
                c=arr[i];
                break;
            }
        }
        return c;
    } 
  
};