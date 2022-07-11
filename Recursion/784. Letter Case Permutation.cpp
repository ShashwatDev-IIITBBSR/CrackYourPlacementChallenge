class Solution {
public:
    vector<string> vec;
    void recursive(string s,int index, string t)
    {
        int n=s.size();
        if(n==index)
        {
            vec.push_back(t);
            return;
        }
        string q=t;
        q=q+s[index];
        recursive(s,index+1,q);
        char h=s[index];
        if(h>=65&&h<=90)
        {
            h=h+32;
            t=t+h;
            recursive(s,index+1,t);
        }
        else if(h>=97&&h<=122)
        {
            h=h-32;
            t=t+h;
            recursive(s,index+1,t);
        }  
    }
    vector<string> letterCasePermutation(string s) 
    {
        string t;
        recursive(s,0,t);
        return vec;
    }
};