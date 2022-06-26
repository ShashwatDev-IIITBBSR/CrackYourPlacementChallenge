class Solution {
public:
    vector<string> vec;
    int max=-1;
    bool check_palindrome(string s, int start,int end)
    {
        int sta=start,e=end;
        while(start<=end)//Here we will also a single alphabet as palindrome that why equal to is used(As required by few test cases) 
        {
            if(s[start]!=s[end]) return false;
            start++;end--;
        }
        max=e-sta;
        vec.push_back(s.substr(sta,e-sta+1));
        return true;
    }
    string longestPalindrome(string s) 
    {
        int start,end;
        for(int i=0;i<s.size();i++)
        {
            start=i;
            end=s.size()-1;
            if(end-start<=max){break;}//will not check for palindrome with size less than max
            while(start<=end)
            {
                if(s[start]==s[end]) check_palindrome(s,start,end);
                end--; 
                if(end-start<=max){break;}
            }
        }
        /*string temp=""; 
        for(auto j:vec)
        {
            if(j.size()>temp.size()) temp=j;
        }
        return temp;*/
        return vec[vec.size()-1];
    }
};