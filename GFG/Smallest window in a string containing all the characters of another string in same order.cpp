class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string window(string s,int index,string p)
    {
        int j=0;
        string temp="";
        for(int i=index;i<s.size()&&j<p.size();i++)
        {
            if(s[i]==p[j]) j++;
            temp=temp+s[i];
        }
        if(j==p.size()) return temp;
        temp="-1";
        return temp;
    }
    string smallestWindow (string s, string p)
    {
        string a="-1",temp;
        int size=-1,d;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==p[0])
                temp=window(s,i,p);
                if(temp=="-1") continue;
                d=temp.size();
                if(size==-1||size>d) a=temp; size=d;
        }
        return a;
    }
};