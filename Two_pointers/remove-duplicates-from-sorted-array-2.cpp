int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int j=0;
    for(int i=1;i<A.size();i++){
        int f=0;
        while(i < A.size() && A[i] == A[j]){
            f=1;
            i++;
        }
        if(f == 1){
            j++;
            A[j]=A[j-1];
        }
        if(i < A.size()){
            j++;
            A[j] = A[i];
        }
    }
    while(A.size() != (j+1)){
        A.pop_back();
    }
    return A.size();
}

