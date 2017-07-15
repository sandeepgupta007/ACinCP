bool Solution::isPalindrome(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int temp=A,temp1=0,i=0;
    while(temp > 0){
        temp = temp/10;
        i++;
    }
    i--;
    temp=A;
    while(temp > 0){
        temp1=temp1+(temp%10)*int(pow(10,i));
        i--;
        temp=temp/10;
    }
    if(temp1 == A)
        return true;
    else
        return false;
}

