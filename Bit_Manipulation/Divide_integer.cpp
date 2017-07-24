int Solution::divide(int dividend, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long int temp = dividend,ans=0;
    long int divisor = d;
    if(temp == 0){
        return 0;
    }
    if(divisor == 0)
        return INT_MAX;
    bool neg = false;
    if(dividend < 0 && divisor < 0){
        neg == false;
        //cout << " * ";
    }
    else if(dividend > 0 && divisor > 0)
        neg = false;
    else if(dividend < 0 || divisor < 0)
        neg = true;
    temp = abs(temp);
    divisor = abs(divisor);
    if(divisor == 1){
        if(neg)
            return -temp;
        else
            if(temp <= INT_MAX){
                return (int)temp;
            }
            else
                return INT_MAX;
    }
    while(temp > 0){
        temp-=(divisor);
        ans++;
        if(temp < 0)
            ans--;
    }
    if(neg){
       return -ans; 
    }
    if(ans > INT_MAX)
        return INT_MAX;
    else
        return (int)ans;
}

