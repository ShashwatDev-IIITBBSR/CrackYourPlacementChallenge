class Solution
{
    public:
    vector<string> vec;
    void recursion(int n,int num_open,int num_close,string s)
    {
        if(n==num_open&&n==num_close){vec.push_back(s);return;}
        else if(n==num_open)
        {
            s.append(")");
            recursion(n,num_open,num_close+1,s);
            return;
        }
        string h=s;
        if(num_open<n)
        {
             s.append("(");
             recursion(n,num_open+1,num_close,s);
        }
       if(num_close<num_open)
        {
             h.append(")");
             recursion(n,num_open,num_close+1,h);
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        string t;
        recursion(n,0,0,t);
        return vec;
    }
};
