int dp[1000000]={0};

int fac(int n){
    for(int i=1;i<=n;i++){
        dp[i]=(dp[i-1]*i)%1000003;
    }
    return dp[n];
}

int Solution::findRank(string A) {
    int a[30]={0};
    dp[0]=1;
    dp[1]=1;
    for(int i=0;i<A.length();i++){
        a[A[i]-97]++;
    }
    int j=0,k,ans=0,n=A.length();
    while(j < A.length()-1){
        k=0;
        for(int i=j+1;i<A.length();i++){
            if(A[j] > A[i]){
                k++;
            }
        }
        if(dp[n-j-1] == 0){
            int e = fac(n-j-1);
        }
        ans+=(k*(dp[n-j-1]))%1000003;
        j++;
    }
    return (ans+1)%1000003;
}

