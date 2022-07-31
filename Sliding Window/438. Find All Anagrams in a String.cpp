//Method 1
/*
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> hash(26, 0);
        vector<int> phash(26, 0);
        int window = p.size();
        int len = s.size();
        if(len < window)
        {
            return ans;
        }
        int left = 0,right = 0;
        while(right < window)
        {
            phash[p[right] - 'a'] += 1;
            hash[s[right] - 'a'] += 1;
            right++;
        }
        right -=1;
        while(right < len)
        {
            if(phash == hash)
            {
                ans.push_back(left);
            }
            right+=1;
            if(right != len)
            {
                hash[s[right] - 'a'] += 1;
            }
            hash[s[left] - 'a'] -=1 ;
            left += 1;
        }
        return ans;
    }
};*/
/Method 2
class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        unordered_map<char,int>umap,sliding_window;
        vector<int>vec;
        for(auto x:p)
        {
            umap[x]++;
        }
        vector<int>result;
        for(int i=0;i<s.size();i++)
        {
            if(i<p.size())
            {
                sliding_window[s[i]]++;
            }
            if(i==p.size()-1)
            {
                if(sliding_window==umap)
                {
                    vec.push_back(i-p.size()+1);
                }
            }
            if(i>p.size()-1)
            {
                sliding_window[s[i-p.size()]]--;
                if(sliding_window[s[i-p.size()]]==0)
                {
                    sliding_window.erase(s[i-p.size()]);
                }
                sliding_window[s[i]]++;
                if(sliding_window==umap)
                {
                    vec.push_back(i-p.size()+1);
                }                
            }
        }
        return vec;
    }
};



