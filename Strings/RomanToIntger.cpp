int value(char r){
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
    return -1;
}

int Solution::romanToInt(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int ans=0;
    for (int i=0;i<A.length()-1;i++){
        int val1 = value(A[i]);
        int val2 = value(A[i+1]);
        if(val1 >= val2){
            ans+=(val1);
        }
        else{
            ans-=(val1);
        }
    }
    ans+=(value(A[A.length()-1]));
    return ans;
    
}

