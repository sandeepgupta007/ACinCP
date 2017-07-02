vector<int> Solution::getRow(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i,j,a[A+2];
    A++;
    vector < int > ans(A,0);
    for(i=0;i<A;i++){
        if(i == 0){
            a[i]=1;
        }
        else{
            for(j=0;j<=i;j++){
                if(j == 0 || j == i){
                    a[j]=1;
                }
                else{
                    a[j] = ans[j-1]+ans[j];
                }
            }
        }
        for(j=0;j<=i;j++){
            ans[j]=a[j];
        }
    }
    return ans;
}

