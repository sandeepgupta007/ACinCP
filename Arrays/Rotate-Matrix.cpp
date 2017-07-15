void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A[0].size(),a,b,c,d;
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            a = A[i][j];
            b = A[j][n-i-1];
            c = A[n-j-1][i];
            d = A[n-i-1][n-j-1];
            //cout << a << b << c << d << endl;
            A[i][j] = c;
            A[j][n-i-1] = a;
            A[n-j-1][i] = d;
            A[n-i-1][n-j-1] = b;
        }
    }
    return;
}

