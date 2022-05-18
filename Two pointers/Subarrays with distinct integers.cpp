int atmost(vector<int>v,int N)
{
    int n=v.size();
    int i=0,j=0,ans;
    map<int,int>m;
    while(i<n)
    {
        m[v[i]]++;
        while(m.size()> N)
        {
            auto it=m.find(v[j]);
            it->second--;
            if(it->second==0)m.erase(it);
            j++;
        }
        ans+=i-j+1;
        i++;
    }
    return ans;
}



int Solution::solve(vector<int> &A, int B) {

    return atmost(A,B)-atmost(A,B-1);

}
