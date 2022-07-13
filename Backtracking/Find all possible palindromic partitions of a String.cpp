class Solution {
  public:
  vector<vector<string>> vec;
  bool is_palindrome(string S,int start,int end)
  {
      while(start<end)
      {
          if(S[start]!=S[end]){return false;}
          start++;
          end--;
      }
      return true;
  }
  void recursion(string S,int curr_index,vector<string> t)
  {
      int n=S.size();
      if(n==curr_index){vec.push_back(t);return;}
      string h;
      for(int i=curr_index;i<n;i++)
      {
          h+=S[i];
          if(is_palindrome(S,curr_index,i))
          {
              t.push_back(h);
              recursion(S,i+1,t);
              t.pop_back();
          }
      }
      
  }
    vector<vector<string>> allPalindromicPerms(string S) 
    {
        vector<string>t;
        recursion(S,0,t);
        return vec;
        // code here
    }
};

