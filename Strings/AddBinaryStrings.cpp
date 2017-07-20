string Solution::addBinary(string A, string B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int m = max(A.length(),B.length());
    int i = A.length()-1;
    int j = B.length()-1;
    int c=0;
    int val = 0;
    string ans="";
    while(i >= 0 && j >= 0){
        ans=ans+to_string(((A[i]-48)+(B[j]-48)+c)%2);
        c = ((A[i]-48)+(B[j]-48)+c)/2;
        i--;
        j--;
        //cout << ans << endl;
    }
    if(i >= 0){
        while(i >= 0){
            ans=ans+to_string(((A[i]-48)+c)%2);
            c = ((A[i]-48)+c)/2;
            i--;
        }
    }
    if(j >= 0){
        while(j >= 0){
            ans=ans+to_string(((B[j]-48)+c)%2);
            c = ((B[j]-48)+c)/2;
            j--;
        }
        //cout << " *";
    }
    if(c > 0)
        ans = ans+to_string(c);
    reverse(ans.begin(),ans.end());
    return ans;
}

