class Solution {
public:
    vector<vector<int>>vec;
    void recursion(vector<int>values,vector<int>num_time,int target,vector<int> temp,int sum,int curr_index)
    {
        if(sum>target){return;}
        if(sum==target)
        {
            sort(temp.begin(),temp.end());
            vec.push_back(temp);
            return;
        }
        if(curr_index==values.size()){return;}
        recursion(values,num_time,target,temp,sum,curr_index+1);//0 times
        for(int i=0;i<num_time[curr_index]&&sum<=target;i++)
        {
            temp.push_back(values[curr_index]);
            sum+=values[curr_index];
            recursion(values,num_time,target,temp,sum,curr_index+1);
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<int> t;
        unordered_map<int,int>umap;
        vector<int>values,num_time;
        for(int i=0;i<candidates.size();i++){umap[candidates[i]]++;}
        for(auto x:umap)
        {
            values.push_back(x.first);
            num_time.push_back(x.second);
        }
        recursion(values,num_time,target,t,0,0);
        return vec;
    }
};
//Below one is Correct Approach but shows time limit error for some cases
/*class Solution {
public:
    vector<vector<int>>vec;
    void recursion(vector<int>& candidates, int target,vector<int> temp,int sum,int curr_index)
    {
        if(sum>target){return;}
        if(sum==target)
        {
            sort(temp.begin(),temp.end());
            int i,j;
            for(i=0;i<vec.size();i++)//Check for dublicates
            {
                if(vec[i].size()==temp.size())
                {
                    for(j=0;j<temp.size();j++)
                    {
                        if(vec[i][j]!=temp[j]){break;}
                    }
                    if(j==temp.size()){return;}
                }
            }
            vec.push_back(temp);
            return;
        }
        if(curr_index==candidates.size()){return;}
        recursion(candidates,target,temp,sum,curr_index+1);//Not Including candidates[curr_index]
        
        if(candidates[curr_index]<=target)//Including candidates[curr_index]
        {
            temp.push_back(candidates[curr_index]);
            recursion(candidates,target,temp,sum+candidates[curr_index],curr_index+1);
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<int> t;
        recursion(candidates,target,t,0,0);
        return vec;
    }
};*/