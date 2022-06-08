class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode *p,*q;
        int a,b;
        if(!head)
        {
            return head;
        }
        p=head;
        q=head->next;
        while(q)
        {
            if (q->val==val)
            {
                p->next=q->next;
                q->next=NULL;
                q=p->next;
                continue;
            }
            p=q;
            q=q->next;
        }
        if(head->val==val)
        {
            head=head->next;
        }
        return head;
    }
};
