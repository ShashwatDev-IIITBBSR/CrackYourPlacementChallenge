class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) 
    {
        int left=0,right=1;
        int n=colors.size();
        int min_time=0;
        while(right<n)
        {
            if(colors[left]==colors[right])
            {
                if(neededTime[left]<=neededTime[right])
                {
                    min_time+=neededTime[left];
                    left=right;
                    right++;
                }
                else
                {
                    min_time+=neededTime[right];//left will stay at its place and right will move to next
                    right++;                    
                }
            }
            else
            {
                left=right;
                right++;
            }
        }
        return min_time;
    }
};