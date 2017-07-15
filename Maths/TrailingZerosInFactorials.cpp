int Solution::trailingZeroes(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int ans=0,i=0,u=5;
    while(A/u > 0){
        ans+=(A/u);
        u*=5;
    }
    return ans;
}

