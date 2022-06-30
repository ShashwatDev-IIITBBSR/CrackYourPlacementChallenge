#include <unordered_map>
class Solution{
  public:
    int longestKSubstr(string s, int k) 
    {
        unordered_map<int,int>umap;
        int i=0,j=0,maxi=-1,n=s.size();
        /*for(j=0;j<n;j++)
        {
            umap[s[j]]++;
            if(umap.size()<k){continue;}
            else if(umap.size()==k)
            {
                maxi=max(maxi,j-i+1);
            }
            else
            {
                while(umap.size()>k)
                {
                    umap[s[i]]--;
                    if(umap[s[i]] == 0)
                    {
                        umap.erase(s[i]);
                    }
                    i++;
                }
            }
        }*/
        while(j<s.size())
        {
            umap[s[j]]++;
            if(umap.size()<k){j++;}
            else if(umap.size()==k)
            {
                maxi=max(maxi,j-i+1);
                j++;
            }
            else
            {
                while(umap.size()>k)
                {
                    umap[s[i]]--;
                    if(umap[s[i]] == 0){
                        umap.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return maxi;
    }
};
