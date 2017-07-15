int gcd(int a,int b){
    if(a == 0){
        return b;
    }
    return gcd(b%a,a);
}

int Solution::cpFact(int A, int B) {
    int temp = A;
    int d;
    while(1){
        d = gcd(temp,B);
        temp = temp/d;
        if(d == 1){
            return temp;
            break;
        }
    }
}

