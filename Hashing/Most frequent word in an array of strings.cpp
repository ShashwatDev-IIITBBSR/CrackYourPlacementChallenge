class Solution
{
    public:
    /*struct trienode
    {
        trienode *children[26];
        int word_end;
    }
    void insert(trienode)*/
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) 
    {
        unordered_map<string,int>umap;
        unordered_map<string,int>first_occurance;
        int maxi=INT_MIN;
        string s;
        for(int i=0;i<n;i++)
        {
            if(!(first_occurance.find(arr[i])!=first_occurance.end()))
            {
                first_occurance[arr[i]]=i;
            }
            umap[arr[i]]++;
            if(maxi<umap[arr[i]])
            {
                 s=arr[i];
                 maxi=umap[arr[i]];
            }
            else if(maxi==umap[arr[i]])
            {
                if(first_occurance[s]<first_occurance[arr[i]])
                {
                    s=arr[i];
                }
            }
        }
        return s;
    }
};