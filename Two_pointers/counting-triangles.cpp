int Solution::nTriang(vector<int> &A) {
    sort(A.begin(),A.end());
    int j,k;
    int ans=0;
    for(int i=0;i<A.size()-2;i++){
        k=i+2;
        for(j=i+1;j<A.size()-1;j++){
            while(k < A.size() && A[i]+A[j] > A[k]){
                k++;
            }
            ans+=(k-j-1);
            ans=ans%1000000007;
        }
    }
    return ans;
}

