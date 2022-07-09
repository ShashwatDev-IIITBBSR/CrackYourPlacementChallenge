class Solution{
    unordered_map<string,int>umap;
public: 
int mod = 1003;
    int solve(string s, int i,int j,bool istrue)
    {
        if(i>j){return false;}
        if(i==j)
        {
            if(s[i]=='T')
            {
                if(istrue){return true;}
                else{return false;}
            }
            else
            {
                if(!istrue){return true;}
                else{return false;}                
            }
        }
        string temp=to_string(i);
        temp.push_back(' ');
        temp.append(to_string(j));
        temp.push_back(' ');
        if(istrue){temp.append("T");}
        else{temp.append("F");}
        if(umap.find(temp)!=umap.end())
        {
            return umap[temp];
        }
        int count=0,k,lt,rt,lf,rf;
        for(k=i+1;k<=j-1;k=k+2)
        {
            lt=solve(s,i,k-1,true);
            lf=solve(s,i,k-1,false);
            rt=solve(s,k+1,j,true);
            rf=solve(s,k+1,j,false);
            if(s[k]=='|')
            {
                if(istrue){count+=(lt*rt+lt*rf+rt*lf)%mod;}
                else{count+=rf*lf%mod;}
            }
            else if(s[k]=='^')
            {
                if(istrue){count+=(lt*rf+rt*lf)%mod;}
                else{count+=(lt*rt+lf*rf)%mod;}
            }
            else
            {
                if(istrue){count+=lt*rt%mod;}
                else{count+=(lf*rf+lf*rt+lt*rf)%mod;}
            }            
        }
        return umap[temp]=count%mod;
    }
    int countWays(int N, string S)
    {
        return solve(S,0,N-1,true);
    }
};