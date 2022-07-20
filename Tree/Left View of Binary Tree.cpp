vector<int>vec;
void left_view(Node* root,int level,vector<bool>&filled)
{
    if(!root){return;}
    if(filled[level]==false)
    {
        vec.push_back(root->data);
        filled[level]=1;
    }
    left_view(root->left,level+1,filled);
    left_view(root->right,level+1,filled);
}
vector<int> leftView(Node *root)
{
   vec.clear();
   vector<bool>filled(100,false); 
   left_view(root,0,filled);
   return vec;
}