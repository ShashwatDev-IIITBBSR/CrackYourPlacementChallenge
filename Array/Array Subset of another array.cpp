string isSubset(int a1[], int a2[], int n, int m) 
{
    unordered_map<int,int>umap;
    for(int i=0;i<m;i++)
    {
        umap[a2[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(umap.find(a1[i])!=umap.end())
        {
            if(umap[a1[i]]==1)
            {
                umap.erase(a1[i]);
            }
            else
            {
                umap[a1[i]]--;
            }
        }
    }
    if(umap.size()==0)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}