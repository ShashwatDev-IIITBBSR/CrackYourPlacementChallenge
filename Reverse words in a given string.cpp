class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string str;
        int last=S.size()-1;
        for(int i=S.size()-1;i>=0;i--)
        {
            if(S[i]=='.')
            {
                str=str+S.substr(i+1,last-i)+'.';
                last=i-1;
            }
            if(i==0)
            {
                str=str+S.substr(0,last+1);
            }
        }
        return str;
        // code here 
    } 
};
