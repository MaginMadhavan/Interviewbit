/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *s=A;

    int count=0;

    while(s!=NULL)
    {
        count++;
        s=s->next;
    }

    if(count<=B)
    {   ListNode* x=A;
        A=A->next;return A;
        
    }

    s=A;

    for(int i=1;i<=count-B-1;i++)
    {
        s=s->next;
    }
    ListNode* temp=s->next;
    s->next=temp->next;
  
    return A;
}
