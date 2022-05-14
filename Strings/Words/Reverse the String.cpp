string Solution::solve(string A) {
    string result;
    int i=0,n=A.size();
    while(i<n)
    {
        while(A[i]==' ' && i<n)i++;
        if(i>=n)break;
        int j=i+1;
        while(A[j]!=' '&& j<n)j++;
        
        string sub=A.substr(i,j-i);
        if(result.length()==0)result=sub;
        else result=sub + ' '+ result;
        i=j+1;
    }
    return result;
}
