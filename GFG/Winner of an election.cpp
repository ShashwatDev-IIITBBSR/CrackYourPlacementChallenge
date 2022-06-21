class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string,int> umap;
        int max=0;
        vector<string> k(2);
        for(int i=0;i<n;i++)
        {
            umap[arr[i]]++;
            if(umap[arr[i]]>max)
            {
                max=umap[arr[i]];
            }
        }
        string temp="";
        for(auto itr=umap.begin();itr!=umap.end();itr++)
        {
            if(itr->second==max)
            {
                if(temp=="")
                {temp=itr->first;}
                else if(temp>itr->first)
                {
                    temp=itr->first;
                }
            }
        }    
        k[0]=temp;
        k[1]=to_string(umap[temp]);
        return k;
    }
};