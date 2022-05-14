bool isvowel(char c)
{
    if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u' or c=='A' or c=='E' or c=='I' or c=='O' or c=='U')return true;
    return false;
}
int Solution::solve(string A) {
    
    int count=0;

    for(int i=0;i<A.size();i++)
    {
        if(isvowel(A[i]))count+=A.size()-i;
    }
    return count%10003;
}
