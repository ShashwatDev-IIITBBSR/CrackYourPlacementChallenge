class Solution {
public:
    int minDeletions(string s) 
    {
        unordered_map<char,int>umap;
        map<int,vector<char>,greater<int>>umap_rev;
        int i,j,n=s.size(),del=0;
        char element;
        for(i=0;i<n;i++)
        {
            umap[s[i]]++;
        }
        for(auto x:umap)
        {
            umap_rev[x.second].push_back(x.first);
        }
        for(auto a:umap_rev)
        {
            if(a.second.size()==1){continue;}
            for(j=1;j<a.second.size();j++)
            {
                /*element=a.second[j];
                for(i=0;i<s.size();i++)
                {
                    if(s[i]==element)
                    {
                        s.erase(i,1);
                        break;
                    }
                }*/
                del++;
                if(a.first-1>0){umap_rev[a.first-1].push_back(a.second[j]);}
                //a.first-1 means it's frequency should not be 0;
            }                                 
        }
        return del;
    }
};