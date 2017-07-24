unsigned int Solution::reverse(unsigned int num) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unsigned int count = 31;
    unsigned int reverse_num = 0;
    //num >>= 1; 
    while(num)
    {
       reverse_num <<= 1;
       reverse_num |= num&1;
       num >>= 1;
       cout << reverse_num << "*";
       count--;
    }
    reverse_num <<= count;
    return reverse_num;
}

