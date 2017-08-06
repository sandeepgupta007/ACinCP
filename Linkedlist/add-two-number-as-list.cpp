/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *start=A,*pre=NULL;
    int carry = 0;
    int v;
    while(A != NULL && B != NULL){
        v = A->val+carry+B->val;
        carry = v/10;
        v = v%10;
        A->val = v;
        pre = A;
        A = A->next;
        B = B->next;
    }
    
    while(A != NULL){
        v = A->val+carry;
        carry = v/10;
        v = v%10;
        A->val = v;
        pre = A;
        A = A->next;
    }
    if(pre != NULL)
        pre->next = B;
    else
        start = B;
    pre = B;
    while(B != NULL){
        v = B->val + carry;
        carry = v/10;
        v = v%10;
        B->val = v;
        pre = B;
        B = B->next;
    }
    
    if(carry > 0){
        ListNode *s;
        s = (ListNode *)malloc(sizeof(ListNode));
        s->val = carry;
        s->next = NULL;
        pre->next = s;
    }
    // A = start;
    // ListNode *temp=NULL;
    // while(A != NULL){
    //     if(A->val > 0){
    //         temp = A;
    //     }
    // }
    // temp->next = NULL;
    return start;
}

