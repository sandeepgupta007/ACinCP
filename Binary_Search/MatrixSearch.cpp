int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    for(int i=0;i<A.size();i++)
        if(binary_search(A[i].begin(),A[i].end(),B)){
            return 1;
        }
    return 0;
}

