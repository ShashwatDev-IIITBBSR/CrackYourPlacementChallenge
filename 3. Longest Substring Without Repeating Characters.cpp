class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<int,int>umap;
        int i=0,j=0,maxi=0,n=s.size();
        for(j=0;j<n;j++)
        {
            umap[s[j]]++;
            if(umap[s[j]]>1)//if dublicate found then we will move i till dublicate is removed from sliding window
            {
                while(umap[s[j]]>1)
                {
                    umap[s[i]]--;
                    //if(umap[s[i]]==0){umap.erase(s[i]);}
                    i++;
                }
                continue;
            }
            maxi=max(maxi,j-i+1);
        }
        return maxi;
    }
};