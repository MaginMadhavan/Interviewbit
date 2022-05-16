void Solution::sortColors(vector<int> &A) {

int n=A.size();
int start=0,end=n-1,i=0;

while(i<=end)
{
    if(A[i]==2)
    {
        swap(A[i],A[end]);
        end--;
    }
    else if(A[i]==0)
    {
        swap(A[i],A[start]);
        i++;start++;
    }
    else i++;
}

}
