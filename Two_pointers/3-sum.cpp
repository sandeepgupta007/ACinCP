int Solution::threeSumClosest(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(),A.end());
    int j,k;
    int ans=INT_MAX;
    int val=0;
    int n = A.size();
    for(int i=0;i<A.size();i++){
        j = i+1;
        k = n-1;
        while(k > j){
            if(A[i]+A[j]+A[k] == B) return (A[i]+A[j]+A[k]);
            //cout << abs(B-(A[i]+A[j]+A[k])) << " ";
            if(ans > abs(B-(A[i]+A[j]+A[k]))){
                ans = abs(B-(A[i]+A[j]+A[k]));
                val = (A[i]+A[j]+A[k]);
            }
            if(A[i]+A[j]+A[k] > B) k--;
            else j++;
        }
    }
    return val;
}

