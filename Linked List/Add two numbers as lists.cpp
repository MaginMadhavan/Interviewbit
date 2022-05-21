/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {

    ListNode* ans= new ListNode(0);
    ListNode* pt=ans;
   

    ListNode* pa=A;
    ListNode* pb=B;
    
    int sum=0,carry=0;

    while(pa && pb)
    {
        sum=pa->val + pb->val + carry;
        
        pt->next=new ListNode(sum%10);
        carry=sum/10;

        pt=pt->next;
        pa=pa->next;
        pb=pb->next;
    }
    while(pa)
    {
        sum=pa->val+carry;
        pt->next=new ListNode(sum%10);
        carry=sum/10;
        pt=pt->next;
        pa=pa->next;
    }
    while(pb)
    {
        sum=pb->val+carry;
        pt->next=new ListNode(sum%10);
        carry=sum/10;
        pt=pt->next;
        pb=pb->next;
    }
     if(carry)
        {
            pt ->next = new ListNode(carry);
        }

    

    return ans->next;

}
