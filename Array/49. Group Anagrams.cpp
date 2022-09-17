
/*class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>>res;
        vector<unordered_map<char,int>>vec;
        int n=strs.size();
        for(int i=0;i<strs.size();i++)
        {
            unordered_map<char,int>umap;
            for(int j=0;j<strs[i].size();j++)
            {
                umap[strs[i][j]]++;
            }
            vec.push_back(umap);
        }
        vector<bool>visited(n,0);
        for(int i=0;i<n;i++)
        {
            if(visited[i]==1){continue;}
            visited[i]=1;
            vector<string>v;
            v.push_back(strs[i]);
            for(int j=i+1;j<n;j++)
            {
                if(visited[j]==0&&vec[i]==vec[j])
                {
                    v.push_back(strs[j]);
                    visited[j]=1;
                }
            }
            res.push_back(v);
        }        
        return res;
    }
};*/


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>>res;
        unordered_map<string,vector<string>>umap;
        for(auto x:strs)
        {
            string s=x;
            sort(s.begin(),s.end());
            umap[s].push_back(x);
        }
        for(auto x:umap)
        {
            res.push_back(x.second);
        }
        return res;
    }
};
