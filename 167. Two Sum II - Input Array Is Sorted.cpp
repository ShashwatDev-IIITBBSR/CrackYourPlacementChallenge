class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int start=0,n=numbers.size(),end;
        end=n-1;
        vector<int>vec(2);
        while(true)
        {
            if((numbers[start]+numbers[end])>target){end--;}
            else if((numbers[start]+numbers[end])<target){start++;}
            else
            {
                vec[0]=start+1;
                vec[1]=end+1;
                return vec;
            }
        }
    }
};