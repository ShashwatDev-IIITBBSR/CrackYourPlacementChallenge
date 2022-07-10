class Solution{
public:
    vector<string> vec;
    void recursion(string S,int index,string t)
    {
        int n=S.size();
        if(n==index)
        {
            vec.push_back(t);
            return;
        }
        string h=t;
        t=t+" "+S[index];
        h=h+S[index];
        recursion(S,index+1,t);
        recursion(S,index+1,h);
    }
    
    vector<string> permutation(string S)
    {
        string t;
        t=t+S[0];
        recursion(S,1,t);
        return vec;
    }
};