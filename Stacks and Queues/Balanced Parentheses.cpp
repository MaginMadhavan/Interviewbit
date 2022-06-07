int Solution::solve(string A) {
    stack<char>s;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='(') s.push(A[i]);

        
        else if(A[i]==')')
        {
            if(s.empty()==0)
            s.pop();
            else return false;
        }
    }

    return s.empty();

}
