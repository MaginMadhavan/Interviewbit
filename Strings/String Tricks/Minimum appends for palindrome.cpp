int Solution::solve(string A) {
    int N = A.size();
    int i=0,j=N-1,k=0;
    while(i<j){
        if(A[i]==A[j]){
            i++;
            j--;
        }
        else{
            k++;
            i=k;
            j=A.size()-1;
        }
    }
    return k;
}
