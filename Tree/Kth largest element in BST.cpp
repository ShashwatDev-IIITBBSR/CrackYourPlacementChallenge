class Solution
{
    public:
    int num_elements(Node *root)
    {
        if(root==NULL){return 0;}
        else{return 1+num_elements(root->left)+num_elements(root->right);}
    }
    int kthLargest(Node *root, int K)
    {
        while(K!=num_elements(root->right)+1)
        {
            int q=num_elements(root->right)+1;
            if(K>q)
            {
                root=root->left;
                K=K-q;
            }
            else
            {
                root=root->right;
            }
        }
        return root->data;
    }
};