class Solution{   
public:
bool ismatching(string str,int k,string s)
{
    int i=0;
    while(i<k && str[i]==s[i]){i++;}
    if(i==k){return true;}
    else{return false;}
}
    int klengthpref(string arr[], int n, int k, string str)
    {    
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(ismatching(str,k,arr[i])){count++;}
        }
        return count;
    }
};