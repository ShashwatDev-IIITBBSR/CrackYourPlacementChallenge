class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        vector<int> umap[n+1];
        vector<int> vec[n+1];
        for(auto i: trust)
        {
            umap[i[0]].push_back(i[1]);
            vec[i[1]].push_back(i[0]);
        }
        vector<bool> judge(n+1,true);
        int i;
        for(i=1;i<=n;i++)
        {
            if(!umap[i].empty())
            {
                judge[i]=false;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(judge[i]==true)
            {
                if(vec[i].size()==(n-1))
                {
                    return i;
                }
            }
        }
        return -1;
    }
};