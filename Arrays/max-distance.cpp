int Solution::maximumGap(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i,j,lmin[A.size()+1],rmin[A.size()+1];
    lmin[0] = A[0];
    int n = A.size();
    for(i=1;i<n;i++){
        lmin[i]=min(lmin[i-1],A[i]);
    }
    rmin[n-1] = A[n-1];
    for(i=n-2;i>=0;i--){
        rmin[i]=max(rmin[i+1],A[i]);
    }
    i=0;
    j=0;
    int ans = -1;
    while(i < n && j < n){
        if(lmin[i] <= rmin[j]){
            ans=max(ans,j-i);
            j++;
        }
        else{
            i++;
        }
    }
    return ans;
}

