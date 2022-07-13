class Solution {
public:
    unordered_set<int>uset;
    bool recursion(int n)
    {
        if(n==1){return true;}
        int sum=0;
        while(n>0)
        {
            sum+=(n%10)*(n%10);
            n=n/10;
        }
        if(uset.find(sum)!=uset.end()){return false;}
        uset.insert(sum);
        return recursion(sum);
    }
    bool isHappy(int n) 
    {
        return recursion(n);
    }
};
//Another Method
/*class Solution {
public:
    int k=0;
    bool recursion(int n)
    {
        k++;
        if(k>10000){return false;}
        if(n==1){return true;}
        int sum=0;
        while(n>0)
        {
            sum+=(n%10)*(n%10);
            n=n/10;
        }
        return recursion(sum);
    }
    bool isHappy(int n) 
    {
        return recursion(n);
    }
};*/