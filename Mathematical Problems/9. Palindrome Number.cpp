class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0){return false;}
        string s=to_string(x);
        int start=0;
        int end=s.size()-1;
        while(start<end)
        {
            if(s[start]!=s[end]){return false;}
            start++;
            end--;
        }
        return true;
    }
};
//Without conversion to string
class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0){return false;}
        int w=x,n=0;
        long long sum=0;
        while(w>0)
        {
            sum=sum*10+w%10;
            w=w/10;
        }
        if(sum==x){return true;}//Sum is reverse of x
        else{return false;}
    }
};