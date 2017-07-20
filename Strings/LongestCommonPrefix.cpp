string Solution::longestCommonPrefix(vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i,n=A.size(),c;
    string temp = A[0];
    for(int i=0;i<n;i++){
        if(i == 0) c = A[0].length();
        else{
            string b="";
            for(int j=0;j<A[i].length();j++){
                if(j >= c) break;
                if(temp[j] == A[i][j]){
                    b=b+A[i][j];
                }
                else break;
            }
            temp = b;
            c = b.length();
        }
        //cout << temp << " ";
    }
    return temp;
}

