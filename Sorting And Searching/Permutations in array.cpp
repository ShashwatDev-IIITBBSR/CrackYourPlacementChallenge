class Solution {
  public:
  bool static comparator(long long x,long long y)
  {
      if(x>=y){return true;}
      return false;
  }
    bool isPossible(long long a[], long long b[], int n, long long k) 
    {
        sort(a,a+n);
        sort(b,b+n,comparator);
        for(int i=0;i<n;i++)
        {
            if(a[i]+b[i]<k){return false;}
        }
        return true;
    }
};