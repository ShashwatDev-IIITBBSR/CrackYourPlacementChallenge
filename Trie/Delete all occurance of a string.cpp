struct trie_node
{
    int value; // non zero if leaf
    trie_node_t *children[ALPHABET_SIZE];
};
class Solution{
  public:
  void deleteKey(trie_node_t *root, char key[])
  {
      trie_node *curr=root;
     for(int i=0;key[i]!='\0';i++)
    {
        if(curr->children[key[i]-'a']==NULL)
        {
            return;
        }
        else
        {
            curr=curr->children[key[i]-'a'];
        }
    }
    curr->value=0;
  }
};
