class Solution{
public:	
		
	string removeDups(string S) 
	{
	    unordered_map<char,int>umap;
	    for(int x=0;x<S.size();x++)
	    {
	        if(umap[S[x]]>0)
	        {
	            S.erase(x,1);
	            x--;         //Because After erase size of string will automatically decrease
	        }
	        else
	        {
	            umap[S[x]]++;
	        }
	    }
	    return S;
	}
};