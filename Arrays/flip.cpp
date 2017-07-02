vector<int> Solution::flip(string A){
    int l = A.length();
    int a[l+1];
    int f=0;
    vector < int > ans;
    for(int i=0;i<l;i++){
        if(A[i] == '0'){
            f=1;
            a[i]=1;
        }
        else{
            a[i]=-1;
        }
    }
    if(f == 0){
        return ans;
    }
    int maxi = INT_MIN,lans,rans;
    int m = 0,lm=0,rm=0;
    for(int i=0;i<l;i++){
        //cout << a[i];
        m+=(a[i]);
        if(m < 0){
            lm = i+1;
            m = 0;
        }
        if(maxi < m){
            lans = lm;
            rans = i;
            maxi = m;
        }
    }
    ans.push_back(lans+1);
    ans.push_back(rans+1);
    return ans;
}

