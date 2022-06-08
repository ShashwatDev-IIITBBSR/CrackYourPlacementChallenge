/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode *a,*b;
        int q,w,c,i;
        a=headA;
        b=headB;
        q=w=0;
        while(a)
        {
            q++;
            a=a->next;
        }
        while(b)
        {
            w++;
            b=b->next;
        }
        if(q==0||w==0)
        {
            return NULL;
        }
        a=headA;
        b=headB;
        if(q>w)
        {
            c=q-w;
            for(i=0;i<c;i++)
            {
                a=a->next;
            }
        }
        else
        {
            c=w-q;
            for(i=0;i<c;i++)
            {
                b=b->next;
            }
        }
        while(a&&b)
        {
            if(a==b)
            {
                break;
            }
            a=a->next;
            b=b->next;
        }
        return a;
    }
};




