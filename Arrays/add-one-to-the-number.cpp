vector<int> Solution::plusOne(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i,c=1,k=A.size();
    int a[A.size()+1];
    vector < int > v;
    for(i=A.size()-1;i>=0;i--){
        if(A[i]+c > 9){
            a[k]=0;
        }
        else{
            a[k]=A[i]+c;
            c=0;
        }
        k--;
    }
    if(c == 1) a[0]=1;
    else a[0]=0;
    int f=0;
    for(i=0;i<A.size()+1;i++){
        if(a[i] != 0 && f == 0){
            v.push_back(a[i]);
            f=1;
        }
        else if(f == 1){
            v.push_back(a[i]);
        }
    }
    return v;
}

