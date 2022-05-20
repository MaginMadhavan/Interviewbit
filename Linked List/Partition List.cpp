/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {

    ListNode* list1= new ListNode(0);
    ListNode* list2= new ListNode(0);

    ListNode* l1=list1;
    ListNode* l2=list2;

    while(A)
    {
        if(A->val<B)
        {
            l1->next=A;
            l1=l1->next;
        }
        else
        {
            l2->next=A;
            l2=l2->next;
        }
        A=A->next;
    }
    l1->next=list2->next;
    l2->next=NULL;

    return list1->next;

}
