int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int ans = INT_MAX;
    int i=A.size()-1,j=B.size()-1,k=C.size()-1;
    while(i>=0 and j>=0 and k>=0)
    {
        int maxe = max(A[i], max(B[j],C[k]));
        int mine = min(A[i], min(B[j],C[k]));
        ans = min(ans, maxe - mine);
        if(A[i]==maxe) i--;
        else if(B[j]==maxe) j--;
        else if(C[k]==maxe) k--;
    }
    return ans;
}
