/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {

    ListNode* head;
    if(A->val<B->val)
    {
        head=A;
        A=A->next;
    }
    else
    {
        head=B;
        B=B->next;
    }

    ListNode* temp=head;
    while(A and B)
    {
        if(A->val<B->val)
        {
            temp->next=A;
            A=A->next;
        }
        else
        {
            temp->next=B;
            B=B->next;   
        }
        temp=temp->next;
    }
    if(A)temp->next=A;
    if(B)temp->next=B;

return head;

}
