class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,s,k,profit=0;
        s=prices.size();
        for(i=1;i<s;i++)
        {
            if(prices[i]>prices[i-1])
            {
                profit=profit+prices[i]-prices[i-1];
            }
        }
        return profit;
    }
};