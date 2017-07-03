vector<int> Solution::subUnsort(vector<int> &A) {
    int l = A.size();
    int i,j,u=-1,r=-1,s=l-1,e=0;
    vector < int > ans;
    for(i=0;i<l-1;i++){
        if(A[i] > A[i+1]){
            s = i;
            break;
        }
    }
    if(s == l-1){
        ans.push_back(-1);
        return ans;
    }
    for(i=l-1;i>=0;i--){
        if(A[i] < A[i-1]){
            e = i;
            break;
        }
    }
    int ma=INT_MIN,mi=INT_MAX;
    for(i=s;i<=e;i++){
        ma=max(ma,A[i]);
        mi=min(mi,A[i]);
    }
    for(i=0;i<=s;i++){
        if(mi < A[i]){
            s = i;
            break;
        }
    }
    for(i=l-1;i>e;i--){
        if(ma > A[i]){
            e = i;
            break;
        }
    }
    ans.push_back(s);
    ans.push_back(e);
    return ans;
}

