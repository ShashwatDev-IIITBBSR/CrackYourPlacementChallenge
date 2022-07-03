class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) 
    {
        unordered_map<int,vector<int>>umap;
        vector<int>arr;
        int start,i,last,fir,sec;
        for(i=0;i<adjacentPairs.size();i++)
        {
            umap[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            umap[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
        }
        for(auto x:umap)
        {
            if(x.second.size()==1){start=x.first;}
        }
        arr.push_back(start);
        //total number of elements in array= Number of edges +1
        for(i=0;i<adjacentPairs.size();i++)
        {
            last=arr.back();
            if(umap[last].size()==1)
            {
                arr.push_back(umap[last][0]);
                umap.erase(last);
                continue;
            }
            fir=umap[last][0];
            sec=umap[last][1];
            if(umap.find(fir)!=umap.end())
            {
                arr.push_back(fir);
                umap.erase(last);
            }
            else
            {
                 arr.push_back(sec);
                 umap.erase(last);               
            }
        } 
        return arr;
    }
};


