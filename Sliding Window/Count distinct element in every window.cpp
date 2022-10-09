class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int>vec;
        unordered_map<int,int>umap;
        for(int i=0;i<k;i++)
        {
            umap[A[i]]++;
        }
        vec.push_back(umap.size());
        for(int i=k;i<n;i++)
        {
            umap[A[i]]++;
            umap[A[i-k]]--;
            if(umap[A[i-k]]==0){umap.erase(A[i-k]);}
            vec.push_back(umap.size());
        }
        return vec;
    }
};