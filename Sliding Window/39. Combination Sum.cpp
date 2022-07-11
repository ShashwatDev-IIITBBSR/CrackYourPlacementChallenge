class Solution {
public:
    //Variable Sliding Window
    vector<vector<int>>vec;
    void recursion(vector<int>& candidates,vector<int> temp,int sum,int curr_index,int target)
    {
        if(sum>target){return;}
        else if(sum==target){vec.push_back(temp);return;}
        if(curr_index==candidates.size()){return;}
        int i=1;
        recursion(candidates,temp,sum,curr_index+1,target);
        while(sum<=target)
        {
            temp.push_back(candidates[curr_index]);
            sum=sum+candidates[curr_index];
            recursion(candidates,temp,sum,curr_index+1,target);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int>t;
        recursion(candidates,t,0,0,target); 
        return vec;
    }
};