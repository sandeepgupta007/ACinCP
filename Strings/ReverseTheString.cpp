void Solution::reverseWords(string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string str;
    stack < string > temp;
    for(int i=0;i<A.length();i++){
        if(A[i] != ' '){
            str = "";
            while(i<A.length() && A[i] != ' '){
                str = str+A[i];
                i++;
            }
            temp.push(str);
        }
    }
    str="";
    while(temp.size() != 1){
        str=str+temp.top();
        temp.pop();
        str=str+" ";
    }
    str = str+temp.top();
    A="";
    A = A+str;
}

