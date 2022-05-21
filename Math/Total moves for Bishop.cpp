int Solution::solve(int A, int B) {
    int count=0;
    for(int i=A,j=B;i<=8 && j<=8 && i>0 && j>0;i++,j++)
    {
        count++;
    }
    for(int i=A, j=B;i<=8 && j<=8 && i>0 && j>0;i--,j++)
    {
        count++;
    }
    for(int i=A, j=B;i<=8 && j<=8 && i>0 && j>0;i--,j--)
    {
        count++;
    }
    for(int i=A,j=B;i<=8 && j<=8 && i>0 && j>0;i++,j--)
    {
        count++;
    }
    return count-4;


}
