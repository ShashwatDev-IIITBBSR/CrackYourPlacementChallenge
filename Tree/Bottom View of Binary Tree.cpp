class Solution {
  public:
  map<int,pair<int,int>>umap;
  void bottom_view(Node *root,int level,int col)
  {
      if(root==NULL){return;}
      pair<int,int>p;
      if(umap.find(col)!=umap.end())
      {
          p=umap[col];
          if(p.first<=level)
          {
              p.first=level;
              p.second=root->data;
              umap[col]=p;
          }
      }
      else
      {
            p.first=level;
            p.second=root->data;
            umap[col]=p;
      }
      bottom_view(root->left,level+1,col-1);
      bottom_view(root->right,level+1,col+1);
  }
  vector <int> bottomView(Node *root) 
  {
      vector<int>vec;
      umap.clear();
      bottom_view(root,0,0);
      for(auto x:umap)
      {
          vec.push_back(x.second.second);
      }
      return vec;
  }
};
