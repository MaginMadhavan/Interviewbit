int Solution::braces(string A) {
    int n=A.size();
    stack<char>s;

    for(int i=0;i<n;i++)
    {
        if(A[i]!=')')s.push(A[i]);
        else
        {   
            bool flag=false;
            while(!s.empty() && s.top()!='(')
            {
                if(s.top()=='+'|| s.top()=='-' || s.top()=='*' || s.top()=='/')flag=true;
                s.pop();
            }
            if(flag==false)return 1;
            s.pop();
        }
    }
    return 0;
}

