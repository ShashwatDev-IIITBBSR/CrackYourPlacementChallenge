class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int max_diameter=0;
    int height(Node* root) 
    {
        if(!root){return 0;}
        int lh=height(root->left),rh=height(root->right);
        max_diameter=max(max_diameter,lh+rh+1);
        return 1+max(lh,rh);
    }
    int diameter(Node* root) 
    {
        height(root);
        return max_diameter;
    }
};
