bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    int ar=0,dp=0;
    while(ar < arrive.size()){
        K--;
        ar++;
        if(K == 0){
            if(arrive[ar] >= depart[dp]){
                K++;
                dp++;
            }
        }
        if(K < 0){
            return false;
        }
    }
    return true;
}

