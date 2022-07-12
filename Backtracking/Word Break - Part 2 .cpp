class Solution{
public:
    vector<string>vec;
    void divide_string(unordered_set<string>uset,string s,int start_index,string res)
    {
        int n=s.size(),i;
        if(start_index==n){vec.push_back(res);}
        string k;
        for(i=start_index;i<n;i++)
        {
            k+=s[i];
            if(uset.find(k)!=uset.end())
            {
                if(res==""){divide_string(uset,s,i+1,k);}
                else{divide_string(uset,s,i+1,res+" "+k);}
            }
        }
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        unordered_set<string>uset;
        for(int i=0;i<n;i++)
        {
            uset.insert(dict[i]);
        }
        string res;
        divide_string(uset,s,0,res);
        return vec;
    }
};