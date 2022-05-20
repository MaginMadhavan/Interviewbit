/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) {
    
    ListNode* s=A;
    ListNode* temp;
    int count=0;
    while(s!=NULL){
        s=s->next;
        count++;
    }
    s=A;

    int pos=(count/2)+1-B;
    if(pos<=0)return -1;

    while(pos-1>0)
    {
        s=s->next;
        pos--;
    }
    return s->val;

}
