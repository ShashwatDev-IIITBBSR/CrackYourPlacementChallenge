class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        map<int,int> ordered_map;
        vector<int> final_vec;
        int u,count;
        for(int i=0;i<arr1.size();i++)
        {
            ordered_map[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++)
        {
            count=ordered_map[arr2[i]];
            u=arr2[i];
            for(int j=0;j<count;j++)
            {
                final_vec.push_back(u);
            }
            ordered_map.erase(u);
            //we can also use ordered_map[u]=0;
        }
        for(auto itr=ordered_map.begin();itr!=ordered_map.end();itr++)
        {
            for(int j=0;j<itr->second;j++)
            {
                final_vec.push_back(itr->first);
            }
        }
        return final_vec;
    }
};
//other solution
/*
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        
        map<int, int>mp;
        for(auto x: arr1)
            mp[x]++;
        for(auto temp :  arr2){
            if(mp.find(temp)!=mp.end()){
                auto x  = mp.find(temp);
                int count = x->second;  // 5->2
                vector<int>v(count, temp); // v = 5 5 
                ans.insert(ans.end(), v.begin(), v.end());
                mp.erase(temp);
            }
        }
        
        for(auto x : mp){
            int ele = x.first;
            int count = x.second;
            vector<int>v(count, ele);
            ans.insert(ans.end(), v.begin(), v.end());
        }
        
        return ans;
    }
};*/