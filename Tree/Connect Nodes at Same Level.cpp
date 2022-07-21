class Solution
{
    public:
    unordered_map<int,vector<Node*>>umap;//Int part will save the level 
    void recursion(Node* root,int level)
    {
        if(!root){return;}
        umap[level].push_back(root);
        recursion(root->left,level+1);
        recursion(root->right,level+1);
    }
    void connect(Node *root)
    {
       umap.clear();
       vector<Node*> v;
       Node* t;
       recursion(root,0);
       int n;
       for(auto x:umap)
       {
           v=x.second;
           n=v.size();
           for(int i=0;i<n;i++)
           {
               t=v[i];
               if(i==n-1)
               {
                   t->nextRight=NULL;
               }
               else
               {
                   t->nextRight=v[i+1];
               }
           }
       }
    }    
};