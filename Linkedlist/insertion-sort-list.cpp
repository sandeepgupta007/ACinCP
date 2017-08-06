/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    ListNode* temp,*start=A;
    while(A != NULL){
        temp = A;
        while(temp != NULL){
            if(A->val >= temp->val){
                int m = A->val;
                A->val = temp->val;
                temp->val = m;
            }
            temp = temp->next;
        }
        A = A->next;
    }
    return start;
}

