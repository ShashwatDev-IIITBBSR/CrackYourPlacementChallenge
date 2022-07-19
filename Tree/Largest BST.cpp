class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    bool isBST(Node *root,int min,int max)
    {
        if(root==NULL){return 1;}
        else if(root->data<=min||root->data>=max){return 0;}
        else{return isBST(root->left,min,root->data)&&isBST(root->right,root->data,max);}
    }
    /*int height_BST(Node *root)
    {
        if(root==NULL){return 0;}
        else
        {
            return 1+max(height_BST(root->left),height_BST(root->right));
        }
    }*/
    int size_BST(Node *root)
    {
        if(root==NULL){return 0;}
        else
        {
            return 1+size_BST(root->left)+size_BST(root->right);
        }
    }
    int largestBst(Node *root)
    {
    	stack<Node*>st;
    	Node *temp;
    	int maxi=0;
    	st.push(root);
    	while(!st.empty())
    	{
    	    temp=st.top();
    	    st.pop();
    	    if(isBST(temp,INT_MIN,INT_MAX)){maxi=max(maxi,size_BST(temp));}
    	    else
    	    {
    	        if(temp->right){st.push(temp->right);}
    	        if(temp->left){st.push(temp->left);}
    	    }
    	}
    	return maxi;
    }
};


//O(n) solution
class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    
    //vector will contain size,greatest,smallest
    vector<int> largest_BST(Node *root)
    {
        vector<int> vec1(3),vec2(3),vec3(3);
        if(root==NULL)
        {
            vec1[0]=0;
            vec1[1]=INT_MIN;
            vec1[2]=INT_MAX;
            return vec1;
        }
        vec1=largest_BST(root->left);
        vec2=largest_BST(root->right);
        if(root->data>vec1[1] && root->data<vec2[2])
        {
            vec3[0]=1+vec1[0]+vec2[0];
            vec3[1]=max(root->data,vec2[1]);
            vec3[2]=min(root->data,vec1[2]);
        }
        else
        {
            vec3[0]=max(vec1[0],vec2[0]);
            vec3[1]=INT_MAX;
            vec3[2]=INT_MIN;
        }
        return vec3;
    }
    int largestBst(Node *root)
    {
    	vector<int> vec(3);
    	vec=largest_BST(root);
    	return vec[0];
    	
    }
};



