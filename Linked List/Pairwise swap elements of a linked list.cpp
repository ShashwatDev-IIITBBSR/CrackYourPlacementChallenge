class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        if(head==NULL||head->next==NULL){return head;}
        Node *temp;
        temp=head->next;
        head->next=temp->next;
        temp->next=head;
        head=temp;
        head->next->next=pairWiseSwap(head->next->next);
        return head;
        
        // The task is to complete this method
    }
};
