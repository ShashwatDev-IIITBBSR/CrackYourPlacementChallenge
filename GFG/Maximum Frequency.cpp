class Solution {
  public:
    int solve(int N, int y, vector<int> A) 
    {
        unordered_map<int,int> umap;
        int ad;
        int max=0;
        for(auto x:A)
        {
            ad=y-x;
            umap[ad]++;
        }
        for(auto i:umap)
        {
            if(i.second>max)
            {
                max=i.second;
            }
        }
        return max;
    }
};