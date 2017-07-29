vector<int> Solution::maxone(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int c=0,l=0,r=0,f=0,m=B,ml=0,mr=-1;
    for(int i=0;i<A.size();i++){
        if(A[i] == 1){
            if(f == 0){
                l=i;
                f=1;
            }
        }
        else{
            if(B >= 1){
                B--;
                if(f == 0){
                    l = i;
                    f=1;
                }
            }
            else{
                while(A[l] != 0){
                    l++;
                }
                l++;
            }
        }
       // cout << l << " "<< i << endl;
        if(f == 1)
        if(mr-ml <  i-l){
            ml = l;
            mr = i;
        }
    }
    vector < int > v;
    for(int i=ml;i<=mr;i++){
        v.push_back(i);
    }
    return v;
}

