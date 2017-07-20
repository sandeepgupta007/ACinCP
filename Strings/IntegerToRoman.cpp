string Solution::intToRoman(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int q,r;
    string ans="";
    while(A > 0){
        if(A >= 1000){
            q = A/1000;
            A = A%1000;
            for(int i=0;i<q;i++){
                ans=ans+"M";
            }
        }
        else if(A >= 900){
            A = A%900;
            ans = ans+"CM";
        }
        else if(A >= 500){
            A = A%500;
            ans = ans+"D";
        }
        else if(A >= 400){
            A = A%400;
            ans=ans+"CD";
        }
        else if(A >= 100){
            q = A/100;
            A = A%100;
            for(int i=0;i<q;i++){
                ans=ans+"C";
            }
        }
        else if(A >= 90){
            A = A%90;
            ans=ans+"XC";
        }
        else if(A >= 50){
            A = A%50;
            ans = ans+"L";
        }
        else if(A >= 40){
            A = A%40;
            ans=ans+"XL";
        }
        else if(A >= 10){
            q = A/10;
            A = A%10;
            for(int i=0;i<q;i++){
                ans=ans+"X";
            }
        }
        else if(A >= 9){
            A = A%9;
            ans=ans+"IX";
        }
        else if(A >= 5){
            A = A%5;
            ans=ans+"V";
        }
        else if(A >= 4){
            A = A%4;
            ans=ans+"IV";
        }
        else{
            for(int i=0;i<A;i++){
                ans=ans+"I";
            }
            A=A%1;
        }
    }
    return ans;
}

