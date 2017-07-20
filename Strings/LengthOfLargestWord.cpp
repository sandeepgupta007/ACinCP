int Solution::lengthOfLastWord(const string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0,m=0,c=0;
    while(A[i] != '\0'){
        if(A[i]== ' '){
            //m = max(m,c);
            c=0;
        }
        else{
            c++;
            m=c;
        }
        i++;
    }
    //m = max(m,c);
    return m;
}

