/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* s=A;
    while(s->next!=NULL)
    {
        ListNode* temp=s->next;
        while(s->val==temp->val)
        {
            if(temp->next==NULL)
            {
                s->next=NULL;
                return A;
            }
            else temp=temp->next;
        }
        
        s->next=temp;
        s=temp;
    }
    return A;

}
