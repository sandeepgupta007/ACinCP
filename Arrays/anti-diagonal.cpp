vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n=A[0].size();
    vector<vector<int> > v(2*n-1);
    int i,row,col,j=0;
    for(i=0;i<n;i++){
        row = 0;
        col = i;
        vector<int > ac;
        while(row < n && col >= 0){
            v[j].push_back(A[row][col]);
            row++;
            col--;
        }
        j++;
    }
    for(i=1;i<n;i++){
        row = i;
        col = n-1;
        vector < int > ac;
        while(row < n && col >= 0){
            v[j].push_back(A[row][col]);
            row++;
            col--;
        }
        j++;
    }
    return v;
}

