class Solution{
    public:
    //Function to find the height of a binary tree.
    int depth(struct Node* node)
    {
        if(node==NULL){return 0;}
        else
        {
            return max(depth(node->left),depth(node->right))+1;
        }
    }
    int height(struct Node* node)
    {
        depth(node);
        // code here 
    }
};