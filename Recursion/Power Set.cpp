class Solution{
	public:
	vector<string> vec;
	void recursion(string s,int index,string t)
	{
	    int n=s.size();
	    if(n==index)
	    {
	        if(t==""){return;}
	        vec.push_back(t);
	        return;
	    }
	    string h=t;
	    t=t+s[index];
	    recursion(s,index+1,t);
	    recursion(s,index+1,h);
	}
	vector<string> AllPossibleStrings(string s)
	{
	    string t;
	    recursion(s,0,t);
	    sort(vec.begin(),vec.end());
	    return vec;
		    // Code here
	}
};