int Solution::pow(int a, int b, int c) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(a == 0){
        return 0;
    }
    long long temp=1;
    long long x = a;
    long long n = b;
    long long d = c;
    x = x%d;
    while(n > 0){
        if(n%2 != 0){
            temp = (temp*x)%d;
        }
        n=n>>1;
        x = (x*x)%d;
    }
    //cout << temp << " ";
    while(temp < 0){
        temp = temp+d;
    }
    return temp;
}

