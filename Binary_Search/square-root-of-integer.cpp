int Solution::sqrt(int A) {
   long long B=A;
   long long l=0,r=A;
   long long mid;
   long long sq;
   while(l<=r){
       mid=(l+r)>>1;
       sq=mid*mid;
       if(sq==B)
            return (int)mid;
        else if(sq<B)
            l=mid+1;
        else r=mid-1;
   }
   return (int)r;
}
