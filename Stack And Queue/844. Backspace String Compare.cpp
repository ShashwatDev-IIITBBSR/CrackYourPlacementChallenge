class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        vector<char>vec1,vec2;
        int i;
        int n1=s.size(),n2=t.size();
        for(i=0;i<n1;i++)
        {
            if(s[i]!='#'){vec1.push_back(s[i]);}
            else
            {
                if(!vec1.empty()){vec1.pop_back();}
            }
        }
        for(i=0;i<n2;i++)
        {
            if(t[i]!='#'){vec2.push_back(t[i]);}
            else
            {
                if(!vec2.empty()){vec2.pop_back();}
            }
        } 
        if(vec1.size()!=vec2.size()){return false;}
        for(i=0;i<vec1.size();i++)
        {
            if(vec1[i]!=vec2[i]){return false;}
        }
        return true;
    }
};