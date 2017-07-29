/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more detais
    struct ListNode *ans,*temp;
    ans = NULL;
    while(A != NULL && B != NULL){
        if(A->val < B->val){
            if(ans == NULL){
                ans = A;
                temp = ans;
            }
            else{
                ans->next = A;
                ans = A;
            }
            A = A->next;
        }
        else{
            if(ans == NULL){
                ans = B;
                temp = B;
            }
            else{
                ans->next = B;
                ans = B;
            }
            B = B->next;
        }
    }
    while(A != NULL){
        if(ans == NULL){
            ans = A;
            temp = ans;
        }
        else{
            ans->next = A;
            ans = A;
        }
        A = A->next;
    }
    while(B != NULL){
        if(ans == NULL){
            ans = B;
            temp = ans;
        }
        else{
            ans->next = B;
            ans = B;
        }
        B = B->next;
    }
    return temp;
}

