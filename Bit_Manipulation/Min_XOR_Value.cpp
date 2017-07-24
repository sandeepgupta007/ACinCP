int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int ans=INT_MAX,val;
    for(int i=1;i<A.size();i++){
        val = A[i]^A[i-1];
        ans = min(val,ans);
    }
    return ans;
}

