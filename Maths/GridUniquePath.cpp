int Solution::uniquePaths(int A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int count[A][B];
    for(int i=0;i<A;i++){
        count[i][0] = 1;
    }
    for(int i=0;i<B;i++){
        count[0][i] = 1;
    }
    for(int i=1;i<A;i++){
        for(int j=1;j<B;j++){
            count[i][j] = count[i][j-1]+count[i-1][j];
        }
    }
    return count[A-1][B-1];
}

