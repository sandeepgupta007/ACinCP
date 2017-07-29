void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int j=0;
    for(int i=0;i<A.size();i++){
        if(A[i] == 0){
            swap(A[i],A[j]);
            j++;
        }
    }
    int k = j;
    for(int i=j;i<A.size();i++){
        if(A[i] == 1){
            swap(A[i],A[k]);
            k++;
        }
    }
}

