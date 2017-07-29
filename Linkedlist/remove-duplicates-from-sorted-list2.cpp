/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    struct ListNode *curr,*fwd,*temp=NULL,*ans=NULL;
    curr = A;
    fwd = A->next;
    while(curr != NULL){
        if(fwd != NULL && fwd->val == curr->val){
            //cout << curr->val << " ";
            while(fwd != NULL && fwd->val == curr->val){
                fwd = fwd->next;
            }
            curr = fwd;
            if(fwd != NULL)
                fwd = fwd->next;
        }
        else{
            if(temp == NULL){
                temp = curr;
                ans = temp;
                temp->next = NULL;
            }
            else{
                temp->next = curr;
                temp = curr;
                temp->next = NULL;
            }
            curr = fwd;
            if(fwd != NULL)
                fwd = fwd->next;
        }
    }
    return ans;
}

