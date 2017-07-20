string Solution::convert(string A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   vector < char > ans[B+1];
   bool up = false;
   int k=0;
   if(B == 1 || A.length() == 1)
        return A;
   for(int i=0;i<A.length();i++){
       //cout << k << " ";
       ans[k].push_back(A[i]);
       if(up){
           k--;
       }
       else{
           k++;
       }
       if(k >= B){
          up = true;
          k-=2;
       }
       if(k < 0){
           up = false;
           k+=2;
       }
   }
   string temp="";
   for(int i=0;i<B;i++){
       for(int j=0;j<ans[i].size();j++){
           temp=temp+ans[i][j];
       }
   }
    return temp;
}

