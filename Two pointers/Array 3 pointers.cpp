int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
int m=A.size(),n=B.size(),o=C.size(),i=0,j=0,k=0;
int ans=INT_MAX;

while(i<m and j<n and k<o)
{
    int mini=min({A[i],B[j],C[k]});
    int val=max({A[i],B[j],C[k]})-mini;

    ans=min(ans,val);

    if(A[i]==mini)i++;
    else if(B[j]==mini)j++;
    else k++;
}

return ans;
}
