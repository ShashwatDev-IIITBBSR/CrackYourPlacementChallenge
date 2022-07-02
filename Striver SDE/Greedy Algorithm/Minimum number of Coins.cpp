class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int> coins { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
        vector<int>res;
        reverse(coins.begin(),coins.end());
        for(int i=0;i<coins.size();i++)
        {
            if(N<coins[i]){continue;}
            while(N>=coins[i])
            {
                res.push_back(coins[i]);
                N=N-coins[i];
            }
        }
        return res;
    }
};