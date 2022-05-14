bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {

vector<pair<int,int>>ans;
int n=arrive.size();
for(int i=0;i<n;i++)
{
    ans.push_back(make_pair(arrive[i],1));
    ans.push_back(make_pair(depart[i],-1));
}
sort(ans.begin(),ans.end());

int count =0;
for(int i=0;i<ans.size();i++)
{
    count+=ans[i].second;
    if(count>K)return false;
}

return true;

}
