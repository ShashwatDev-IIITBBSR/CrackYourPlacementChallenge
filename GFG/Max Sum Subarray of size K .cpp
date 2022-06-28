class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N)
    {
        long maxi,sliding_window=0;
        int i;
        for(i=0;i<N;i++)
        {
            if(i<K-1)
            {
                sliding_window+=Arr[i];
            }
            else if(i==K-1)
            {
                sliding_window+=Arr[i];
                maxi=sliding_window;
            }
            else
            {
                sliding_window+=Arr[i]-Arr[i-K];
                maxi=max(sliding_window,maxi);
            }
        }
        return maxi;
    }
};