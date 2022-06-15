string Solution::solve(string A) 
{
    string res;
    vector<int> v(26,0);
    queue<char> q; 
    
    for(int i=0;i<A.size();i++)
    {
     q.push(A[i]);
     v[A[i]-'a']++;
     while(!q.empty() and v[q.front()-'a']>1)q.pop();
     if(!q.empty())res+=q.front();
     else res+='#'; 
    }
    
    return res;
}
