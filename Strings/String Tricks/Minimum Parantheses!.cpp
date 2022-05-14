int Solution::solve(string A) {
    int count=0;
    int i=0;
    int close=0;
   
        while(i<A.size())
        {
            if(count==0)
            {
                while(A[i]==')')
                {i++;close++;}
            } 

            if(A[i]=='(')count-=1;
            else if(A[i]==')'){ count+=1;}
            i++;

        }
    return abs(count)+close;
}
