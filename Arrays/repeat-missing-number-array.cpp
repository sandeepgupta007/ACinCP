vector<int> Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long sum=0,sum2=0,a,b,s1,s2;
    long long i,n=A.size();
    vector < int > ans;
    for(i=0;i<n;i++){
        sum+=((long long)A[i]);
        sum2+=((long long)(A[i]*(long long)A[i]));
    }
    s1 = (long long)(n*(long long)(n+1))/2-sum;
    s2 = (long long)(n*(long long)(n+1)*(2*n+1))/6-sum2;
    s2 = s2/s1;
    a = (s1+s2)/2;
    b = (s2-s1)/2;
    ans.push_back(b);
    ans.push_back(a);
    return ans;
}

