class Solution {
public:
    vector<vector<string>> vec;
    bool ispalindrome(string s,int start,int end)
    {
        while(start<end)
        {
            if(s[start]!=s[end]){return false;}
            start++;
            end--;
        }
        return true;
    }
    void recursion(string s,int index,vector<string> temp)
    {
        int n=s.size();
        if(index==n){vec.push_back(temp);return;}
        string t;
        for(int i=index;i<n;i++)
        {
            if(ispalindrome(s,index,i))
            {
                t=s.substr(index,i-index+1);
                temp.push_back(t);
                recursion(s,i+1,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) 
    {
        vector<string> temp;
        recursion(s,0,temp);
        return vec;
        
    }
};