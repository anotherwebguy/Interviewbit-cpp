int findPeak(vector<int> &A){
    int l=0,h=A.size()-1;
    while(l<=h){
        int m=(l+h)>>1;
        if(m==0){
            if(A[m]>A[m+1]) return m;
            else l=m+1;
        }
        if(m==A.size()-1){
            if(A[m]>A[m-1]) return m;
            else h=m-1;
        }
        if(A[m]>A[m-1] && A[m]>A[m+1]){
            return m;
        }
        if(A[m+1]>A[m]){
            l=m+1;
        } else {
            h=m-1;
        }
    }
    return l;
}

int binasc(vector<int> &A,int m,int B){
    int l=0,h=m;
    while(l<=h){
        int m=(l+h)>>1;
        if(A[m]==B) return m;
        else if(A[m]>B) h=m-1;
        else l=m+1;
    }
    return -1;
}

int bindesc(vector<int> &A,int m,int B){
    int l=m,h=A.size()-1;
    while(l<=h){
        int m=(l+h)>>1;
        if(A[m]==B) return m;
        else if(A[m]>B) l=m+1;
        else h=m-1;
    }
    return -1;
}

int Solution::solve(vector<int> &A, int B) {
    int p=findPeak(A);
    int x=binasc(A,p,B);
    int y=bindesc(A,p,B);
    if(x!=-1) return x;
    return y;
}
