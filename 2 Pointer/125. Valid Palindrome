/*
class Solution {
public:
    bool isPalindrome(string s) 
    {
        string t;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57))
            {
                t=t+s[i];
            }
            else if(s[i]>=65&&s[i]<=90)
            {
                s[i]=s[i]+32;
                t=t+s[i];
            }
        }
        int high=t.size()-1,low=0;
        while(high>low)
        {
            if(t[high]!=t[low]){return 0;}
            high--;
            low++;
        }
        return 1;
    }
};*/


class Solution {
public:
    bool isPalindrome(string s) 
    {
        int high=s.size()-1,low=0,n=s.size();
        while(high>low)
        {
            while((high>=0)&&(isalpha(s[high])==false)&&isdigit(s[high])==false)
            {
                high--;
            }
            while((low<n)&&(isalpha(s[low])==false)&&isdigit(s[low])==false)
            {
                low++;
            }
            if(high<=low){break;}
            if(s[high]==s[low])
            {
                high--;
                low++;
                continue;
            }
            if(isdigit(s[high])||isdigit(s[low]))
            {
                return 0;
            }
            if(s[high]+32==s[low]||s[low]+32==s[high])
            {
                high--;
                low++;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
};