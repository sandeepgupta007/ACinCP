int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(B < A[0]){
        return 0;
    }
    else if(B > A[A.size()-1]){
        return A.size();
    }
    int l = lower_bound(A.begin(),A.end(),B)-A.begin();
    if(A[l] == B){
        return l;
    }
    else{
        return l;
    }
    
}

