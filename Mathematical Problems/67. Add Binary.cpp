class Solution {
public:
    string addBinary(string a, string b) 
    {
        int m=a.size();
        int n=b.size();
        if(m>n)
        {
            while(n<m)
            {
                b="0"+b;
                n++;
            }
        }
        else if(n>m)
        {
            while(m<n)
            {
                a="0"+a;
                m++;
            }
        } 
        char carry='0';
        string res;
        for(int i=n-1;i>=0;i--)
        {
            if(carry=='0'&&a[i]=='0'&&b[i]=='0')
            {
                res="0"+res;
                carry='0';
            }
            else if((carry=='1'&&a[i]=='0'&&b[i]=='0')||(carry=='0'&&a[i]=='1'&&b[i]=='0')||(carry=='0'&&a[i]=='0'&&b[i]=='1'))
            {
                res="1"+res;
                carry='0';
            }
            else if((carry=='1'&&a[i]=='1'&&b[i]=='0')||(carry=='0'&&a[i]=='1'&&b[i]=='1')||(carry=='1'&&a[i]=='0'&&b[i]=='1'))
            {
                res="0"+res;
                carry='1';
            }
            else 
            {
                res="1"+res;
                carry='1';
            }            
        }
        if(carry=='1')
        {
            res="1"+res;
        }
        return res;
    }
};