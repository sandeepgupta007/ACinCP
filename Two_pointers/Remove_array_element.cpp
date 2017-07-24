int Solution::removeElement(vector<int> &A, int B) {
    
    int w = 0;
    for(int i=0;i<A.size();i++){
        if(A[i]!=B){    // different elements count
            A[w]=A[i]; 
            w++;    // counter 
        }
    }
    
    return w;
}
