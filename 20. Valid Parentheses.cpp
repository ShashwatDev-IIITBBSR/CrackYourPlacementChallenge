class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> q;
        for(auto x:s)
        {
            if(x=='('||x=='{'||x=='[')
            {
                q.push(x);
            }
            else
            {
                if(q.empty()){return false;}
                if((q.top()=='('&& x!=')')||(q.top()=='{'&& x!='}')||(q.top()=='['&& x!=']')){return false;}
                q.pop();
            }
        }
        if(q.empty()){return true;}
        return false;
    }
};