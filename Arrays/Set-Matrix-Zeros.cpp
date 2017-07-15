void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector <int> a(A.size(),0);
    vector <int> b(A[0].size(),0);
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            if(A[i][j] == 0){
                a[i] = 1;
                b[j] = 1;
            }
        }
    }
    for(int i=0;i<A.size();i++){
        //cout << a[i] << " ";
        if(a[i] == 1){
            for(int j=0;j<A[0].size();j++){
                A[i][j] = 0;
            }
        }
    }
    for(int i=0;i<A[0].size();i++){
        //cout << b[i] << " ";
        if(b[i] == 1){
            for(int j=0;j<A.size();j++){
                A[j][i] = 0;
            }
        }
    }
}

