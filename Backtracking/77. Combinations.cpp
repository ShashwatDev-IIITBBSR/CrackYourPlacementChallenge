class Solution {
public:
    vector<vector<int>> vec;
    void recursion(int n,int curr_val,vector<int>temp,int k)
    {
        if(n<curr_val)
        {
            if(k==0){vec.push_back(temp);}
            return;
        }
        if(k<0||(n-curr_val+1<k)){return;}//Important condition to reduce time complexity
        recursion(n,curr_val+1,temp,k);//not including element
        if(k>0)
        {
            temp.push_back(curr_val);
            recursion(n,curr_val+1,temp,k-1);//including element
        }
    }
    vector<vector<int>> combine(int n, int k) 
    {
        vector<int>t;
        recursion(n,1,t,k);
        return vec;
    }
};