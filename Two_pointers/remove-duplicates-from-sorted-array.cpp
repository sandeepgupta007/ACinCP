void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0,j=0;
    vector < int > vec;
    while(i < A.size() && j < B.size()){
        if(A[i] < B[j]){
            vec.push_back(A[i]);
            i++;
        }
        else{
            vec.push_back(B[j]);
            j++;
        }
    }
    while(i < A.size()){
        vec.push_back(A[i]);
        i++;
    }
    while(j < B.size()){
        vec.push_back(B[j]);
        j++;
    }
    A.clear();
    A = vec;
    //return vec;
}

