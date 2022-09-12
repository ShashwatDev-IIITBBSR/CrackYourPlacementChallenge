class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        unordered_set<int>uset;
        Node *temp,*prev;
        temp=head;
        while(temp)
        {
            if(uset.find(temp->data)!=uset.end())
            {
                prev->next=temp->next;
                temp=prev->next;
            }
            else
            {
                uset.insert(temp->data);
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};
