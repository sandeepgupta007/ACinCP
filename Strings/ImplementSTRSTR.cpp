int Solution::strStr(const string &haystack, const string &needle) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int j,k;
    for(int i=0;i<haystack.length();i++){
        if(haystack[i] == needle[0]){
            int f=0;
            k=i;
            j=0;
            while(k < haystack.length() && j < needle.length() && haystack[k] == needle[j]){
                j++;
                k++;
            }
            if(j == needle.length()){
                return i;
            }
        }
    }
    return -1;
}

