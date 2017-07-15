double area(int x1,int y1,int x2,int y2,int x3,int y3){
    double u = abs(0.50*((x1-x3)*(y2-y1)-(x1-x2)*(y3-y1)));
    return u;
}

int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D) {
    int ans=0;
    int i;
    for(i=0;i<C.size();i++){
        //cout << C.size() << "\n";
        //printf(" * ");
        double d1 = area(A[0],B[0],A[1],B[1],C[i],D[i]);
        double d2 = area(A[1],B[1],A[2],B[2],C[i],D[i]);
        double d3 = area(A[2],B[2],A[3],B[3],C[i],D[i]);
        double d6 = area(A[3],B[3],A[0],B[0],C[i],D[i]);
        double d4 = area(A[0],B[0],A[1],B[1],A[2],B[2]);
        double d5 = area(A[2],B[2],A[3],B[3],A[0],B[0]);
        //cout << d1 << " "<<d2 << " " << d3 << " "<< d4 << " " << d5 << "\n"; 
        if((d1 != 0 && d2 != 0 && d3 != 0 && d6 != 0) && (d1+d2+d3+d6 == d4+d5)){
            ans++;
        }
    }
    return ans;
}

