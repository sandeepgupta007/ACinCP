/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    struct ListNode *temp,*last;
    temp = A;
    
    if(temp == NULL || temp->next == NULL){
        return temp;
    }
    
    int count = 0;
    
    while(A != NULL){
        count++;
        last = A;
        A = A->next;
    }
    
    B = B%count;
    if(B == 0) return temp;
    
    count = count - B;
    B = 0;
    
    A = temp;
    while(B < count - 1){
        A = A->next;
        B++;
    }
    struct ListNode *start,*t;
    t = A->next;
    start = temp;
    
    temp = A->next;
    A->next = NULL;
    last->next = start;
    return t;
}

