int countLeaves(Node* root)
{
    if(!root){return 0;}
    else if(!root->left&&!root->right){return 1;}
    else
    {
        return countLeaves(root->left)+countLeaves(root->right);
    }
}
//Similar Solution
int recursion(Node *root)
   {
       if(!root){return 0;}
       int left=recursion(root->left);
       int right=recursion(root->right);
       if(left==0&&right==0){return 1;}
       return left+right;
   }
int countLeaves(Node* root)
{
    return recursion(root);
}
//Total no of nodes 
/*int count(Node* root)
{
    if(!root){return 0;}
    else
    {
        return 1+count(root->left)+count(root->right);
    }
}*/
