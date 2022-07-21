class Solution{
    public:
    bool is_it_symmetric(struct Node* r1,struct Node*r2)
    {
        if(!r1&&!r2){return 1;}
        else if(!r1||!r2){return 0;}
        else if(r1->data!=r2->data){return 0;}
        else{return is_it_symmetric(r1->left,r2->right)&&is_it_symmetric(r1->right,r2->left);}
    }
    bool isSymmetric(struct Node* root)
    {
        if(!root){return 1;}
        return is_it_symmetric(root->left,root->right);
    }
};