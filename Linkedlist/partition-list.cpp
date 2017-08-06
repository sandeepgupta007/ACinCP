/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode* pre,*fwd,*start,*temp,*join=NULL;
    pre = NULL;
    fwd = NULL;
    while(A != NULL){
        if(A->val < B){
            if(pre == NULL){
                pre = A;
                start = pre;
            }
            else{
                pre->next = A;
                pre = A;
            }
        }
        else{
            if(fwd == NULL){
                fwd = A;
                join = A;
            }
            else{
                fwd->next = A;
                fwd = A;
                //fwd->next = NULL;
            }
        }
        A=A->next;
    }
    if(fwd != NULL) fwd->next = NULL;
    if(pre == NULL){
        return join;
    }
    else{
        pre->next = join;
        return start;
    }
}

