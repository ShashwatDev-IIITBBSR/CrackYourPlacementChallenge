Struct TrieNode
{
    struct TreiNode* children[26];
    bool isLeaf;
}
//Function to insert string into TRIE.
void insert(struct TrieNode *root, string key)
{
    int n=key.size();
    TrieNode *curr;
    curr=root;
    for(int i=0;i<n;i++)
    {
        if(curr->children[key[i]-'a']!=NULL)
        {
            curr=curr->children[key[i]-'a'];
        }
        else
        {
            curr->children[key[i]-'a']=new TrieNode();
            curr=curr->children[key[i]-'a'];
        }
    }
    curr->isLeaf=true;
}

//Function to use TRIE data structure and search the given string.

bool search(struct TrieNode *root, string key) 
{
    int n=key.size();
    TrieNode *curr=root;
    for(int i=0;i<n;i++)
    {
        if(curr->children[key[i]-'a']!=NULL)
        {
            curr=curr->children[key[i]-'a'];
        }
        else
        {
            return false;
        }
    }
    if(curr->isLeaf==true){return true;}
    else{return false;}
}