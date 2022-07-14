class Solution {
public:
    int kthFactor(int n, int k) 
    {
        int c=0;
        int i=1;
        while(true)
        {
            if(n%i==0){c++;}
            if(c==k){return i;}
            if(i>n/2)
            {
                c=c+1;//For n as last factor
                if(c==k){return n;}
                else{return -1;}
            }
            i++;
        }
        return -1;
    }
};