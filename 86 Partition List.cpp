//others Solution
class Solution {
public:

ListNode* partition(ListNode* head, int x) {
    if(!head)
        return NULL;
    vector<int>temp1,temp2;
    ListNode* ptr=head;
    while(ptr)
    {
        if(ptr->val>=x)
        {
            temp1.push_back(ptr->val);
        }
        ptr=ptr->next;
    }
   
    ptr=head;
    while(ptr)
    {
        if(ptr->val<x)
        {
            temp2.push_back(ptr->val);
        }
        ptr=ptr->next;
    }
    ptr=head;
    int i=0;
    while(i<temp2.size())
    {
        ptr->val=temp2[i];
        i++;
        ptr=ptr->next;
    }
    
    i=0;
    while(i<temp1.size())
    {
        ptr->val=temp1[i];
        i++;
        ptr=ptr->next;
    }
    
    return head;
}
};