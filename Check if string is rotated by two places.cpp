
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        if(str1.size()!=str2.size()){return 0;}
        int n=str1.size();
        // Your code here
        bool t=true,p=true;
        for(int i=0;i<n;i++)
        {
            if(str1[i]!=str2[(i+2)%n]){t=false;}
            if(str1[i]!=str2[(i+n-2)%n]){p=false;}
        }
        return t||p;
    }

};
