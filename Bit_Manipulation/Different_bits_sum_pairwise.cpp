int Solution::cntBits(vector<int> &A){
    int ans=0,count;
    for (int i = 0; i < 32; i++){
        count = 0;
        int x = 0;
        x = 1 << i;
        for (int j = 0; j <A.size(); j++)
            if ( (A[j] & x) )
                count++;
        ans += (count * (A.size()- count) * 2)%1000000007;
        ans=ans%1000000007;
    }
    return ans;
}

