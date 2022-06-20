class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        unordered_map<int,int> umap;
        int k=-1,t=-1,flag=0;
        for(int i=0;i<n;i++)
        {
            k=arr[i];
            umap[k]++;
        }
        for(int i=0;i<n;i++)
        {
            k=arr[i];
            if(umap[k]>1)
            {
                return i+1;
            }
        }

        return -1;
        // code here
    }
};