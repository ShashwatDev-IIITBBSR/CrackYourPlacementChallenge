class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        if(!r1&&!r2){return 1;}
        else if(!r1||!r2){return 0;}
        else if(r1->data!=r2->data){return 0;}
        else{return isIdentical(r1->left,r2->left)&&isIdentical(r1->right,r2->right);}
    }
};
