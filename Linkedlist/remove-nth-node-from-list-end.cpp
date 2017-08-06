/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    struct ListNode *temp;
    temp = A;
    int count = 0;
    if(A == NULL || A->next == NULL){
        return NULL;
    }
    
    while(A != NULL){
        A=A->next;
        count++;
    }
    
    A = temp;
    
    if(B >= count){
        return A->next;
    }
    else count = count-B;
    B = 0;
    
    while(B < count-1){
        A = A->next;
        B++;
    }
    
    //cout << A->val<<" ";
    
    if(A->next != NULL)
        A->next = A->next->next;
    else
        A=A->next;
    return temp;
}

