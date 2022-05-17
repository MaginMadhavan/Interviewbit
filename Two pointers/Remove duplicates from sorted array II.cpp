int Solution::removeDuplicates(vector<int> &A) {

int n=A.size(),j=1;
if(n==1)return 1;

for(int i=1;i<n;i++)
{
    if(i<n-1 && A[i]==A[i+1] && A[i]==A[i-1])continue;
    else
    {
        A[j]=A[i];
        j++;
    }
}
return j;
}
