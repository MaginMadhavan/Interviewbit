 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
  if(A==NULL || B==NULL)return 0;
  
  ListNode* First=A;
  ListNode* Second=B;

  while(First!=Second)
  {
      if(First==NULL)First=B;
      else First=First->next;

      if(Second==NULL)Second=A;
      else Second=Second->next;
  }

  return First;
}



