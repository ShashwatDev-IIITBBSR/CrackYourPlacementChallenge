class Solution
{
    public:
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    vector<int>vec;
    void recursion(Node*root)
    {
        if(!root){return;}
        recursion(root->left);
        vec.push_back(root->data);
        recursion(root->right);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
       vector<int>res,vec1,vec2;
       vec.clear();
       recursion(root1);
       vec1=vec;
       vec.clear();
       recursion(root2);
       vec2=vec;
       int i=0,j=0,n1=vec1.size(),n2=vec2.size();
       while(i<n1&&j<n2)
       {
           if(vec1[i]<vec2[j])
           {
               res.push_back(vec1[i]);
               i++;
           }
           else
           {
               res.push_back(vec2[j]);
               j++;
           }
       }
       while(i<n1)
       {
           res.push_back(vec1[i]);
           i++;
       }
       while(j<n2)
       {
           res.push_back(vec2[j]);
           j++;
       } 
       return res;
    }
};
