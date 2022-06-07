class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min,max,max_diff,temp,i,k,l;
        l=prices.size();
        i=k=0;
        min=max=max_diff=0;
        while(i<l)
        {
            if(prices[max]<prices[i])
            {
                max=i;
                temp=prices[max]-prices[min];
                if((temp>max_diff))
                {
                    max_diff=temp;
                }
            }
            if(prices[min]>prices[i])
            {
                min=i;
                temp=prices[max]-prices[min];
                max=i;
            }
            i++;
        }
        return max_diff;
    }
};