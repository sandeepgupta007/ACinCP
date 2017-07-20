int Solution::atoi(const string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector < int > vec;
    int pos=1;
    for(int i=0;i<A.length();i++){
        if(i == 0 && (A[0] == '+' || A[0] == '-')){
            if(A[0] == '-')
                pos = -1;
            i++;
        }
        if(A[i] >= 48 && A[i] <= 57){
            vec.push_back(A[i]-48);
        }
        else{
            break;
        }
    }
    long ans=0;
    for(int i=vec.size()-1;i>=0;i--){
        ans+=(vec[i])*pow(10,vec.size()-1-i);
    }
    ans = pos*ans;
    if(ans > INT_MAX)
        return INT_MAX;
    else if(ans < INT_MIN)
        return INT_MIN;
    else
        return ans;
}

