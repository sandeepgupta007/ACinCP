int Solution::titleToNumber(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   auto n = A.length();
     int val = 0;
     for (auto i=0; i<n; ++i)
     {
        val += pow(26, i)*(A[n-(i+1)] - 'A' + 1);
     }
     return val;
}
