bool isprime(int A)
{
    if(A==1 || A==0)return false;
    
    for(int i=2;i<=sqrt(A);i++)
    {
        if(A%i==0)return false;
    }
    return true;
}

vector<int> Solution::primesum(int A) {
    vector<int>v;
    for(int i=0;i<=A/2;i++)
    {
        if(isprime(i)&&isprime(A-i)){
            v.push_back(i);
            v.push_back(A-i);
            break;
        }
    }
    return v;




}



