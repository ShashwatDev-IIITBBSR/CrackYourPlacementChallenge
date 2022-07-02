class Solution{
public:
    string findLargest(int N, int S)
    {
        string s;
        if(S==0&&N!=1)
        {
            s=to_string(-1);
            return s;
        }
        for(int i=0;i<N;i++)
        {
            if(S>=9)
            {
                s=s+"9";
                S=S-9;
            }
            else
            {
                s=s+to_string(S);
                S=0;
            }
        }
        if(S!=0)
        {
             s=to_string(-1);
             return s;           
        }
        return s;
    }
};

/*
class Solution{
public:
    string findLargest(int N, int S)
    {
        long long num=0;
        string s;
        if(S==0&&N!=1)
        {
            s=to_string(-1);
            return s;
        }
        for(int i=0;i<N;i++)
        {
            if(S>=9)
            {
                num=num*10+9;
                S=S-9;
            }
            else
            {
                num=num*10+S;
                S=0;
            }
        }
        if(S!=0)
        {
             s=to_string(-1);
             return s;           
        }
        s=to_string(num);
        return s;
    }
};*/