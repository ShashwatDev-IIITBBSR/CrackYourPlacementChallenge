class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if(!list1){return list2;}
        if(!list2){return list1;}
        ListNode *temp1,*temp2,*ans,*head;
        if(list1->val<=list2->val)
        {
            ans=head=list1;
            list1=list1->next;                 
        }
        else
        {
            ans=head=list2;
            list2=list2->next;
        }
        while(list1&&list2)
        {
            if(list1->val<=list2->val)
            {
                ans->next=list1;
                ans=list1;
                list1=list1->next;                 
            }
            else
            {
                ans->next=list2;
                ans=list2;
                list2=list2->next;
            }
        }
        if(!list1)
        {
            ans->next=list2;
        }
        else
        {
            ans->next=list1;
        }
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        int n=lists.size();
        ListNode *ans;
        if(n==0){return NULL;}
        ans=lists[0];
        for(int i=1;i<n;i++)
        {
            ans=mergeTwoLists(ans,lists[i]);
        }
        return ans;
    }
};