string isBalanced(string s) 
{
    stack<char>st;
    for(auto x:s)
    {
        if(x=='{'||x=='['||x=='('){st.push(x);}
        else
        {
            if(x=='}')
            {
                if(st.empty()||st.top()!='{'){return "NO";}
                st.pop();
            }
            else if(x==']')
            {
                if(st.empty()||st.top()!='['){return "NO";}
                st.pop();
            }
            else
            {
                if(st.empty()||st.top()!='('){return "NO";}
                st.pop();
            }                        
        }
    }
    if(st.empty()){return "YES";}
    return "NO";
}