class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>st;
        for(int i=0;i<x.size();i++)
        {
            if(x[i]=='['||x[i]=='('||x[i]=='{')
            {
                st.push(x[i]);
            }
            else
            {
                if(st.empty()){return 0;}
                if(x[i]==']')
                {
                    if(st.top()!='['){return 0;}
                    st.pop();
                }
                else if(x[i]=='}')
                {
                    if(st.top()!='{'){return 0;}
                    st.pop();
                }
                else if(x[i]==')')
                {
                    if(st.top()!='('){return 0;}
                    st.pop();
                }
            }
        }
        if(st.empty()){return true;}
        return 0;
    }

};
