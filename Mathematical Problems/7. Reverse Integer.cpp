class Solution {
public:
    int reverse(int x) 
    {
        long long sum=0;
        int flag=1;
        if(x==INT_MIN){return 0;}//Extreme case 
        if(x<0){x=-x;flag=-1;}//Negative Number
        while(x>0)
        {
            sum=sum*10+x%10;
            x=x/10;
        }
        if(sum>INT_MAX){return 0;}
        return flag*sum;
    }
};