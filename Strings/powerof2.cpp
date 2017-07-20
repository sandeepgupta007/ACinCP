string multiplyby2(string A){
    string ans="";
    int i;
    int n=A.length();
    int sum=0,carry=0;
    for(i=n-1;i>=0;i--){
        sum=(A[i]-48)*2+carry;
        carry=sum/10;
        sum%=10;
        ans+=(sum+48);
    }
    if(carry>0)
        ans+=(carry+48);
    //reverse(ans.begin(),ans.end());
    n=ans.length();
    char c;
    for(i=0;i<n/2;i++){
        c=ans[i];
        ans[i]=ans[n-1-i];
        ans[n-1-i]=c;
    }
    return ans;
}

bool compare(string A,string B){
    if(A.length()==B.length())
        return A<B;
    else if(A.length()<B.length())
        return true;
    return false;
}

int Solution::power(string A) {
    int i=0;
    int n=A.length();
    string B="";
    while(i<n && A[i]==48) i++;
    if(i==n)
        return 0;
    while(i<n){
        B+=A[i];
        i++;
    }
    string temp="2";
    while(compare(temp,B)){
        temp=multiplyby2(temp);
    }
    if(temp.length()==B.length() && temp==B)
        return 1;
    return 0;
    
}
