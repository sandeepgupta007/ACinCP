vector<int> Solution::primesum(int A) {
    //bool B[A+1];
    vector < bool > B;
    B.push_back(false);
    B.push_back(false);
    for(int i=2;i<A;i++){
        B.push_back(true);
    }
    for(int i=2;i*i<=A;i++){
        if(B[i] == true){
            for(int j=i*2;j<=A;j+=i){
                B[j] = false;
            }
        }
    }
    vector < int > ans;
    for(int i=2;i<A;i++){
        if(B[i]  && B[A-i] ){
            ans.push_back(i);
            ans.push_back(A-i);
            return ans;
        }
    }
}

