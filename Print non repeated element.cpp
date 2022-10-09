vector<int> printNonRepeated(int arr[],int n)
    {
        vector<int>res;
        unordered_map<int,int>umap;
        for(int i=0;i<n;i++)
        {
            umap[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(umap[arr[i]]==1)
            {
                res.push_back(arr[i]);
            }
        }
        return res;
    }