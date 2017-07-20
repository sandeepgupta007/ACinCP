vector<int> Solution::searchRange(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l = lower_bound(A.begin(),A.end(),B)-A.begin();
    int r = upper_bound(A.begin(),A.end(),B)-A.begin();
    vector < int > ans;
    if(B > A[A.size()-1] || B < A[0] || B != A[l]){
        ans.push_back(-1);
        ans.push_back(-1);
    }
    else{
        ans.push_back(l);
        ans.push_back(r-1);
    }
    return ans;
}

