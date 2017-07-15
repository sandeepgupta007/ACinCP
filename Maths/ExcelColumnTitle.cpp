string Solution::convertToTitle(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int temp = A,i=0;
    int str[10000];
    while(temp > 0){
        int c = temp%26;
        if(c == 0){
            str[i] = 65+25;
            temp=temp/26-1;
        }
        else{
            str[i] = c+64;
            temp=temp/26;
        }
        i++;
    }
    string s;
    for(int j=i-1;j>=0;j--){
        char e = str[j];
        s.push_back(e);
    }
    return s;
}

