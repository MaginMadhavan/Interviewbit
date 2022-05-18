bool is_palindrome(string str)
{
    int n = str.length();
    for(int i=0;i<n/2;i++)
        if(str[i] != str[n-i-1])
            return false;
    
    return true;
}

int Solution::solve(int A, int B, int C) {
    int cnt = 0;
    vector<int> pal;
    for(int i=A;i<=B;i++)
    {
        if(is_palindrome(to_string(i)))
            pal.push_back(i);
    }

    for(int i=0;i<pal.size();i++)
    {
        int j = i;
        while(j<pal.size() && abs(pal[j]-pal[i])<=C)
            j++;
        cnt = max(cnt, j-i);
    }
    
    return cnt;
}



