class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) 
    {
        map<int,int>umap;
        map<int,vector<int>> map_freq;
        vector<int> final_vec;
        for(auto a:nums)
        {
            umap[a]++;//Saves numbers and their frequency
        }
        for(auto k:umap)
        {
            map_freq[k.second].push_back(k.first);// map like frequency->(vector containing numbers 
            //having that frequency)
        }
        for(auto j:map_freq)
        {
            for(int i=j.second.size()-1;i>=0;i--)//reversing vector so that it can be sorted in descending order when frequency is same 
            {
                for(int l=0;l<j.first;l++)//no of times to save in vector
                {final_vec.push_back(j.second[i]);}
            }
        }
        return final_vec;
    }
};
//  Other Solution
/*class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int>umap;
        for(auto x: nums){
            umap[x]++;
        }
        
        sort(nums.begin(), nums.end() , [&](int a , int b) 
             { return  umap[a] != umap[b] ? umap[a] < umap[b] :  a > b ; } );
        
        return nums;
    }
};*/