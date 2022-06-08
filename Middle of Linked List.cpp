//My Solution-
class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
        ListNode *a,*b;
        a=b=head;
        while(b && b->next)
        {
            a=a->next;
            b=b->next->next;
        }
        return a;
    }
};

//Other Solution-
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> A = {head};
        while (A.back()->next != NULL)
            A.push_back(A.back()->next);
        return A[A.size() / 2];
    }
};