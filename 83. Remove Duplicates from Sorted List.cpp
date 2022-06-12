class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(!head || !head->next)
        {
            return head;
        }
        ListNode *a,*b;
        a=head;
        b=a->next;
        while(b)
        {
            if (a->val==b->val)
            {
                a->next=b->next;
                b->next=0;
                b=a->next;
                continue;
            }
            a=b;
            b=b->next;
        }
        return head;
    }
};
