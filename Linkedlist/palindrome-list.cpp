/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    if(A == NULL || A->next == NULL){
        return 1;
    }
    struct ListNode *mid,*fast,*slow,*h;
    slow = A;
    fast = A;
    while(fast != NULL && fast->next != NULL){
        //cout << "*";
        slow = slow->next;
        fast = fast->next->next;
    }
    //cout << slow->val << endl;
    struct ListNode *current,*pre;
    current = slow;
    pre = NULL;
    while(current != NULL){
        h = current->next;
        current->next = pre;
        pre = current;
        current = h;
    }
    while(A != NULL && pre != NULL){
        //cout << A->val << " " << pre->val<<endl;
        if(A->val == pre->val){
            A = A->next;
            pre = pre->next;
        }
        else{
            return 0;
        }
    }
    return 1;
}

