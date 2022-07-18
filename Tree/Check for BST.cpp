class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool is_binary_search_tree(Node* root,int min,int max) 
    {
        if(!root){return true;}
        else if(root->data>=max||root->data<=min){return false;}
        else{ return is_binary_search_tree(root->left,min,root->data)&&is_binary_search_tree(root->right,root->data,max);}
    }
    
    bool isBST(Node* root) 
    {
        return is_binary_search_tree(root,INT_MIN,INT_MAX);
    }
};