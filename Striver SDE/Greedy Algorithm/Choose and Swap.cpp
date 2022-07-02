class Solution{
public:
    void swap_all(string &a,char temp1,char temp2)
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==temp1)
            {
                a[i]=temp2;
            }
            else if(a[i]==temp2)
            {
                a[i]=temp1;
            }
        }
    }
    string chooseandswap(string a)
    {
        char last=a[0];
        int i,n=a.size();
        set<char>oset;
        for(i=0;i<a.size();i++)
        {
            oset.insert(a[i]);
        }
        i=0;
        for(i=0;i<n;i++)
        {
            oset.erase(a[i]);
            if(oset.empty()){break;}
            char ch=*oset.begin();
            if(ch<a[i])
            {
                swap_all(a,ch,a[i]);
                break;
            }
        }
        return a;
    }
};

