vector<int> Solution::subUnsort(vector<int> &A) {

    vector<int>v;
    for(int i=0;i<A.size();i++)
    {
        v.push_back(A[i]);
    }
    sort(v.begin(),v.end());

    int left=-1;
    int right=-1;

    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=v[i]){left=i; break;}
    }

    for(int i=A.size()-1;i>=left;i--)
    {
        if(A[i]!=v[i]){right=i;break;}
    }
    vector<int>ans;
    if(left== -1&& right==-1) {ans.push_back(-1);return ans;}
    ans.push_back(left);
    ans.push_back(right);
    return ans;

    }
