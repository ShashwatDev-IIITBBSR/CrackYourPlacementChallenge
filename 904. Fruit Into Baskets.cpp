class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        unordered_map<int,int>umap;
        int maxi=0,i=0,j,n=fruits.size();
        for(j=0;j<n;j++)
        {
            umap[fruits[j]]++;
            if(umap.size()>2)
            {
                while(umap.size()>2)
                {
                    umap[fruits[i]]--;
                    if(umap[fruits[i]]==0){umap.erase(fruits[i]);}
                    i++;
                }       
            }
            maxi=max(maxi,j-i+1);
        }
        return maxi;
    }
};