vector<vector<int> > Solution::prettyPrint(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector <vector <int > > vec;
    for(int i=0;i < A;i++){
        int temp = A;
        vector < int > v;
        if(i < A){
            for(int j=0;j< 2*A-1;j++){
                if(j < i){
                    v.push_back(temp);
                    temp--;
                }
                else if(j > 2*A-2-i){
                    temp++;
                    v.push_back(temp);
                }
                else{
                    v.push_back(temp);
                }
            }
            vec.push_back(v);
        }
    }
    for(int i=A-2;i>=0;i--){
        vec.push_back(vec[i]);
    }
    return vec;
}

