string Solution::countAndSay(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string dp;
    dp = to_string(1);
    string temp;
    int c,k;
    for(int i=2;i<=A;i++){
        temp="";
        for(int j=0;j<dp.length();j++){
            c=0;
            k=j;
            while(k < dp.length() && dp[k] == dp[j]){
                c++;
                k++;
            }
            temp=temp+to_string(c)+dp[j];
            j=k-1;
        }
        dp = temp;
    }
    return dp;
}

