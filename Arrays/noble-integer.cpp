int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++){
        int j = i+1;
        while(j < A.size() && A[j] == A[i]){
            j++;
        }
        i=j-1;
        if(A[i] >= 0 && A[i] == A.size()-i-1){
            return 1;
        }
    }
    return -1;
}

