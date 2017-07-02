int myCompare(string X, string Y){
    string XY = X.append(Y);
    string YX = Y.append(X);
    return XY.compare(YX) > 0 ? 1: 0;
}
string Solution::largestNumber(const vector<int> &A) {
    vector < string > str;
    int f=0;
    for(int i=0;i<A.size();i++){
        if(A[i] != 0){
            f=1;
        }
        str.push_back(to_string(A[i]));   
    }
    sort(str.begin(),str.end(),myCompare);
    string ans;
    for(int i=0;i<A.size();i++){
        ans.append(str[i]);
    }
    if(f != 0)
        return ans;
    else{
        return to_string(0);
    }
}

