class Solution {
public:
    int fib(int n) 
    {
        int l=0,r=1;
        if(n<2){return n;}
        for(int i=2;i<=n;i++)
        {
            int t=l+r;
            l=r;
            r=t;
        }
        return r;
    }
};