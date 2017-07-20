int Solution::isPalindrome(string A){
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int j = A.length()-1;
    int f=0,e=0;
    string c;
    string d;
    int i=0;
    while(i < j){
        if(f == 0){
            if((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122) || (A[i] >= 48 && A[i] <= 57)){
                c = tolower(A[i]);
                f=1;
            }
            i++;
        }
        if(e == 0){
            if((A[j] >= 65 && A[j] <= 90) || (A[j] >= 97 && A[j] <= 122) || (A[j] >= 48 && A[j] <= 57)){
                d = tolower(A[j]);
                e=1;
            }
            j--;
        }
        if(f == 1  && e == 1){
            //cout << c << d <<" ";
            if(c != d) return 0;
            f=0;
            e=0;
        }
    }
    return 1;
}

