//Solution 1- Using Maps
class Solution {
public:
    int minDeletions(string s) 
    {
        unordered_map<char,int>umap;
        map<int,vector<char>,greater<int>>umap_rev;
        int i,j,n=s.size(),del=0;
        char element;
        for(i=0;i<n;i++)//umap maps has element to frequency
        {
            umap[s[i]]++;
        }
        for(auto x:umap)//umap_rev maps frequency to elements
        {
            umap_rev[x.second].push_back(x.first);
        }
        for(auto a:umap_rev)
        {
            if(a.second.size()==1){continue;}//if only one element at one frequency
            for(j=1;j<a.second.size();j++)
            {
                if(a.first-1>0){umap_rev[a.first-1].push_back(a.second[j]);}
                //a.first-1 means it's frequency should not be 0;
            }                                 
        }
        return del;
    }
};

//Solution 2- Using Priority Queue
class Solution {
public:
    int minDeletions(string s) 
    {
        priority_queue<int>pq;
        unordered_map<char,int>umap;
        int i,n=s.size(),min_del=0,top_freq,second_top;
        for(i=0;i<n;i++)
        {
            umap[s[i]]++;
        }
        for(auto x:umap)
        {
            pq.push(x.second);
        }
        while(pq.size()>1)
        {
            top_freq=pq.top();
            pq.pop();
            second_top=pq.top();
            if(top_freq==second_top)
            {
                min_del++;
                if(top_freq-1>0)
                {
                    pq.push(top_freq-1);
                }
            }
        }
        return min_del;
    }
};