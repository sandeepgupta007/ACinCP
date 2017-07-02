vector<vector<int> > Solution::generateMatrix(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=1,i,left=0,top=0,right=A-1,bottom=A-1;
    int dir = 0;
    vector<vector<int> > v(A, vector<int>(A, 0));
    while(left <= right && top <= bottom){
        if(dir == 0){
            for(i=left;i<=right;i++){
                v[top][i] = n;
                n++;
            }
            top++;
            dir=1;
        }
        else if(dir == 1){
            for(i=top;i<=bottom;i++){
                v[i][right] = n;
                n++;
            }
            right--;
            dir=2;
        }
        else if(dir == 2){
            for(i=right;i>=left;i--){
                v[bottom][i]=n;
                n++;
            }
            bottom--;
            dir=3;
        }
        else if(dir == 3){
            for(i=bottom;i>=top;i--){
                v[i][left]=n;
                n++;
                dir=0;
            }
            left++;
        }
    }
    return v;
}

