int Solution::maxSubArray(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int maxi=INT_MIN,maxo=0;
    for(int i=0;i<A.size();i++){
        maxo+=A[i];
        if(maxi < maxo){
            maxi = maxo;
        }
        if(maxo < 0){
            maxo = 0;
        }
    }
    return maxi;
}

