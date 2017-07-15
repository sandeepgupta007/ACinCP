int Solution::reverse(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long int ans=0;
    while(A != 0){
        ans = ans*10+ A%10;
        A = A/10;
    }
    //if(A < 0) ans = -ans;
    if(ans < INT_MIN || ans > INT_MAX){
        return 0;
    }
    else{
        return ans;
    }
    
}

