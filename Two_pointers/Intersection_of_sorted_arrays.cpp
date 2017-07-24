vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int j=0;
    vector < int > vec;
    for(int i=0;i<A.size();i++){
        while(j < B.size() && B[j] <= A[i]){        // Till we not find values in B equal to less than A
            if(A[i] == B[j]){           
                vec.push_back(A[i]);
                j++;
                break;
            }
            j++;
        }
    }
    return vec;
}

