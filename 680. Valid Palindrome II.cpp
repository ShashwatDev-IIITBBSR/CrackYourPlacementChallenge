class Solution {
public:
    bool valid_Palindrome(string s,int l,int h)
    {
        while(l<h)
        {
            if(s[l]!=s[h]){return 0;}
            l++;
            h--;
        }
        return 1;
    }
    bool validPalindrome(string s) 
    {
        int low=0, high=s.size()-1, count=0;
        while(low<high)
        {
            if(s[low]==s[high])
            {
                high--;
                low++;
                continue;
            }
            else
            {
                if(valid_Palindrome(s,low+1,high)||valid_Palindrome(s,low,high-1)){return 1;}
                else{return 0;}
            }
        }
        return 1;
    }
};