bool isalpha(char c)
{
    if(c>='A' && c<='Z' || c>='a' && c<='z' || c>='0' && c<='9')return 1;
    return 0;
}

int Solution::isPalindrome(string A) {
    int len=0;
    int start=0;
    
     while(A[len]!='\0'){
     len++;
    }
    int end=len-1;
    while(start<=end)
    {
        if(!isalpha(A[start]))
        {
            start++;
            continue;
        }
        if(!isalpha(A[end]))
        {
            end--;
            continue;
        }
        if(A[start]!=A[end] && abs(A[start]-A[end])!=32)return false;
        start++;
        end--;

    }
    return true;
}
