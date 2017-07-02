vector<vector<int> > Solution::generate(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<int> > tri(A);
    if(A <= 0) return tri;
    
    for(int i = 0; i < A; i++){
        if(i == 0){
            tri[i].push_back(1);
        }
        else{
            for(int j = 0; j <= i; j++){
                if(j == 0 || j == A-1){
                    tri[i].push_back(1);   
                }
                else{
                    tri[i].push_back((int)tri[i-1][j]+(int)tri[i-1][j-1]);
                }
            }   
        }
    }
    return tri;
}
