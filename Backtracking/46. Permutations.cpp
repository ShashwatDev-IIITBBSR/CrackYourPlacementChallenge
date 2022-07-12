class Solution {
public:
    vector<vector<int>> vec;
    void recursion(vector<int> nums,int index,vector<int> t)//end_index
    {
        int n=nums.size();
        if(index==-1){vec.push_back(t);return;}
        int i,j;
        vector<int> temp(n);
        for(i=0;i<=index;i++)
        {
            temp=nums;
            for(j=i;j<index;j++)
            {
                temp[j]=temp[j+1];
            }
            t.push_back(nums[i]);
            recursion(temp,index-1,t);
            t.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<int> t;
        recursion(nums,nums.size()-1,t);
        return vec;
    }
};