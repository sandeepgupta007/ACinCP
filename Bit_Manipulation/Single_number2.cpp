int Solution::singleNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int temp,a[32]={0},j;
    for(int i=0;i<A.size();i++){
        temp = A[i];
        j=0;
        while(temp > 0){
            a[j]+=temp%2;
            temp=temp/2;
            j++;
        }
    }
    int res = 0;
    for(int i=0;i<32;i++){
        res += pow(2,i)*(a[i]%3);
    }
    return res;
}
