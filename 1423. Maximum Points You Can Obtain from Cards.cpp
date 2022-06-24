//Sliding Window 
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) 
    {
        vector<int> vec;//If we declare size then we can't do pushback in vector
        int l=cardPoints.size();
        int sum=0,i;
        for(i=l-k;i<l;i++)
        {
            sum=sum+cardPoints[i];
            vec.push_back(cardPoints[i]);
        }
        for(i=0;i<k;i++)
        {
            vec.push_back(cardPoints[i]);
        }
        int max_sum=sum;
        for(i=k;i<(2*k);i++)
        {
            sum=sum+vec[i]-vec[i-k];
            max_sum=max(max_sum,sum);
        }
        return max_sum;
    }
};   