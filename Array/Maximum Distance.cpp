int Solution::maximumGap(const vector<int> &A) {
    int n=A.size();
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        v.push_back({A[i],i});
    }

    int min_index=INT_MAX;
    int ans=0;

    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
   {
       min_index=min(min_index,v[i].second);
       ans=max(ans,v[i].second-min_index);
   }
   return ans;

            
}
