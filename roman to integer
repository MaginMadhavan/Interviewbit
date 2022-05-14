int roman(char c)
{
    if(c=='I')return 1;
    else if(c=='V')return 5;
    else if(c=='X')return 10;
    else if(c=='L')return 50;
    else if(c=='C')return 100;
    else if(c=='D')return 500;
    else if(c=='M')return 1000;
}
int Solution::romanToInt(string A) {
    int count=0,n=A.size();
    for(int i=0;i<n-1;i++)
    {
        if(roman(A[i])<roman(A[i+1]))count-=roman(A[i]);
        else count+=roman(A[i]);
    }
    count+=roman(A[n-1]);
    return count;
}
