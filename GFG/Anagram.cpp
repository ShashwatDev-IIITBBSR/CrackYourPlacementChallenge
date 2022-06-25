class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b)
    {
        unordered_map<char,int> umap1,umap2;
        int i;
        for(auto x:a)
        {
            umap1[x]++;
        }
        for(i=0;i<b.size();i++)
        {
            umap2[b[i]]++;
        }
        for(auto x:umap1)
        {
            if(x.second!=umap2[x.first])
            {
                return false;
            }
            umap2.erase(x.first);
        }
        if(umap2.empty()){return true;}
        return false;
    }
};