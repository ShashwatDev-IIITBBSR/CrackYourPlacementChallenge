class Solution {
  public:
    int countOfSubstrings(string S, int K) 
    {
        unordered_map<char,int>umap;
        int count=0,n=S.size();
        for(int i=0;i<K;i++)
        {
            umap[S[i]]++;
        }
        if(umap.size()==K-1){count++;}
        for(int i=K;i<n;i++)
        {
            umap[S[i]]++;
            umap[S[i-K]]--;
            if(umap[S[i-K]]==0){umap.erase(S[i-K]);}
            if(umap.size()==K-1){count++;}
        }
        return count;
        // code here
    }
};