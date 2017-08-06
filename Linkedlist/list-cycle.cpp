/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *start=A,*ans = NULL;
    ListNode *pre,*fwd;
    if(A == NULL || A->next == NULL)
        return NULL;
    pre = A;
    fwd = A;
    int f=0,c=0;
    if(A == A->next){
        return A;
    }
    while(fwd != NULL && pre != NULL && fwd->next != NULL){
        pre = pre->next;
        fwd = fwd->next->next;
        if(pre == fwd){
            //printf("*");
            fwd = fwd->next;
            c=1;
            while(pre != fwd){
                c++;
                fwd = fwd->next;
            }
            break;
        }
    }
    
    if(fwd == NULL || pre == NULL || fwd->next == NULL){
        //printf("*");
        return NULL;
    }
    
    pre = A;
    fwd = A;
    
    while(c > 0){
        pre = pre->next;
        c--;
    }
    
    while(pre != fwd){
        pre = pre->next;
        fwd = fwd->next;
    }
    return pre;
}

