int Solution::removeElement(vector<int> &A, int B) {
    int n=A.size(),j=0,count=0;
    for(int i=0;i<n;i++){
        if(A[i]!=B){A[j]=A[i];j++;count++;}

    }
    return count;
}
