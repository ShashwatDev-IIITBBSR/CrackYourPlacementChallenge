class Solution{
public:
    struct trienode
    {
        int prefix_count;
        struct trienode *children[26];
    };
    void insert(trienode *root,string s)
    {
        int n=s.size();
        trienode *curr=root;
        for(int i=0;i<n;i++)
        {
            if(curr->children[s[i]-'a']==NULL)
            {
                curr->children[s[i]-'a']=new trienode();
                curr=curr->children[s[i]-'a'];
                curr->prefix_count=1;
            }
            else
            {
                curr=curr->children[s[i]-'a'];
                curr->prefix_count++;
            }
        }
    }
    int prefix_count(trienode *root,string s)
    {
        int n=s.size();
        trienode *curr=root;
        for(int i=0;i<n;i++)
        {
            if(curr->children[s[i]-'a']==NULL)
            {
                return 0;
            }
            else
            {
                curr=curr->children[s[i]-'a'];
            }
        }
        return curr->prefix_count;
    }
    vector<int> prefixCount(int N, int Q, string li[], string query[])
    {
        struct trienode *root=new trienode();
        vector<int>vec;
        for(int i=0;i<N;i++)
        {
            insert(root,li[i]);
        }
         for(int i=0;i<Q;i++)
        {
            vec.push_back(prefix_count(root,query[i]));
        }
        return vec;
    }
};

