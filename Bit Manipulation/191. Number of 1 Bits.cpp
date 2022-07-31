//O(n) solution
class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int count=0;
        while(n>0)
        {
            if(n&1==1){count++;}
            n=n>>1;
        }
        return count;
    }
};

O(number of set bits)
class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int count=0;
        while(n>0)
        {
            n=(n-1)&n;
            count++;
        }
        return count;
    }
};
