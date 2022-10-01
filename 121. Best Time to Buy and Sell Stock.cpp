class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit=0,n=prices.size();
        int maxi=0;
        for(int i=n-1;i>=0;i--)
        {
            profit=max(maxi-prices[i],profit);
            maxi=max(maxi,prices[i]);
        }
        return profit;
    }
};
