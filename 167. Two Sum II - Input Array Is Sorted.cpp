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

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int>ans;
        int l=0,h=numbers.size()-1;
        while(l<h)
        {
            if(numbers[l]+numbers[h]>target)
            {
                h--;
            }
            else if(numbers[l]+numbers[h]<target)
            {
                l++;
            }
            else
            {
                ans.push_back(l+1);
                ans.push_back(h+1);
                break;
            }
        }
        return ans;
    }
};