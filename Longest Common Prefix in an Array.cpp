
class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        int s=0;
        for(int i=0;i<N;i++)
        {
            if(arr[i].size()<arr[s].size()){s=i;}
        }
        string str=arr[s];
        int l=str.size();
        for(int j=0;j<N;j++)
        {
            string x=arr[j];
            for(int i=0;i<l;i++)
            {
                if(str[i]!=x[i])
                {
                    l=i;
                    break;
                }
            }
        }
        if(l==0){str="-1"; return str;}
        return str.substr(0,l);
    }
};























