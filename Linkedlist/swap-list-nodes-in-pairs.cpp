/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *temp,*start,*fwd,*pre=NULL;
    if(A == NULL || A->next == NULL){
        return A;
    }
    start = A->next;
    while(A != NULL){
        //cout << A->val << " ";
        if(A->next != NULL){
            fwd = A->next->next;
            temp = A->next;
            A->next = A->next->next;
            temp->next = A;
            if(pre == NULL){
                pre = A;    
            }
            else{
                pre->next = temp;
                pre = A;
            }
        }
        else{
            break;
        }
        A = fwd;
    }
    return start;
}





