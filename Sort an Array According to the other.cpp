vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        vector<int>res;
        map<int,int>umap;
        for(auto x:A1)
        {
            umap[x]++;
        }
        for(auto x:A2)
        {
            int k=umap[x];
            for(int i=0;i<k;i++)
            {
                res.push_back(x);
            }
            umap.erase(x);
        }
        for(auto x:umap)
        {
            int k=x.second;
            for(int i=0;i<k;i++)
            {
                res.push_back(x.first);
            }
        }
        return res;
    } 