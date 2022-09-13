class Solution
{
    public:
    Node *compute(Node *head)
    {
        if(head==NULL||head->next==NULL){return head;}
        head->next=compute(head->next);
        if(head->next->data<=head->data)
        {
            return head;
        }
        else
        {
            return head->next;
        }
    }
};
   