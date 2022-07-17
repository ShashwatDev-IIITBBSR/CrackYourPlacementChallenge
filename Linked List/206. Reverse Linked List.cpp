class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        if(!head || !head->next){return head;}
        ListNode *l,*m,*r;
        l=head;
        m=head->next;
        r=head->next->next;
        l->next=NULL;
        while(r!=NULL)
        {
            m->next=l;
            l=m;
            m=r;
            r=r->next;
        }
        m->next=l;
        return m;
    }
};
