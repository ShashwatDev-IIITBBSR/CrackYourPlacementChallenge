/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode *a,*b,*list,*head;
        a=list1;
        b=list2;
        if(!a)
        {
            return list2;
        }
        if(!b)
        {
            return list1;
        }
        if(a->val<=b->val)
        {   
            head=list=a;
            a=a->next;}
        else
        {
            head=list=b;
            b=b->next;
        }
        while(a&&b)
        {
            if((a->val)<=(b->val))
            {
                list->next=a;
                list=a;
                a=a->next;
            }
            else
            {
                list->next=b;
                list=b;
                b=b->next;
            }
        }
        if(!a)
        {
            list->next=b;
        }
        else
        {
            list->next=a;
        }
        return head;
    }
};