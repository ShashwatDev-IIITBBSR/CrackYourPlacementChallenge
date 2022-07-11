class Solution {
public:
    vector<vector<int>> vec;
    void recursion(vector<int>& nums,int index,vector<int>temp)
    {
        if(nums.size()==index)
        {
            int n=vec.size(),i,j;
            for(i=0;i<n;i++)//Check for dublicate
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
        recursion(nums,index+1,temp);
        temp.push_back(nums[index]);
        recursion(nums,index+1,temp);
    }     
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        vector<int>temp;
        sort(nums.begin(),nums.end());
        recursion(nums,0,temp);
        //sort(vec.begin(),vec.end());
        return vec;
    }
};
//Better Approach Using Map
/*class Solution {
public:
    
     void backtrack(vector<vector<int>> &answer,int index, vector<int>& nums, vector<int> subset,map<vector<int>, int> &visited){
       if(index==nums.size()){
           sort(subset.begin(),subset.end());
           if(visited[subset]==0){
               answer.push_back(subset);
           }
           
           visited[subset]=1;
           return;
       }
        subset.push_back(nums[index]);
        index++;
        backtrack(answer,index,nums,subset,visited);
        subset.pop_back();
        backtrack(answer,index,nums,subset,visited);
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> answer;
        map<vector<int>, int> visited;
        vector<int> subset;
        backtrack(answer,0,nums,subset,visited);
        return answer;
    }
};*/
