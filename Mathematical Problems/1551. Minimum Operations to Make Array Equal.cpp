class Solution {
public:
    int minOperations(int n) 
    {
        //int mid=((2*(n-1)+1)+1)/2;
        int mid=n;//middle value;
        int l=n/2;
        //Sum of 1+3+5+...N=N*N
        return (mid-l)*l;
    }
};