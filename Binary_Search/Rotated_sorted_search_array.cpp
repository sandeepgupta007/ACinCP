int bs(int st,int end,const vector<int>&A,int x)
{
    if(st>end)
        return -1;
    int mid,i,j,k;
    mid = (st+end)/2;
    if(A[mid]==x)
        return mid;
    if(A[st]>A[end])
    {
        if(A[mid]>=A[st])
        {
            if(A[mid]>x && x>=A[st])
                return bs(st,mid-1,A,x);
            else
                return bs(mid+1,end,A,x);
        }
        else
        {
            if(x<=A[end] && x>A[mid])
                return bs(mid+1,end,A,x);
            else
                return bs(st,mid-1,A,x);
        }
    }
    else
    {
        if(A[mid]>x)
            return bs(st,mid-1,A,x);
        else
            return bs(mid+1,end,A,x);
    }
}

int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i,j,k,l,m,n;
    n = A.size();
    return bs(0,n-1,A,B);
}
