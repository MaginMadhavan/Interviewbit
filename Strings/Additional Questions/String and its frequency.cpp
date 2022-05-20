string Solution::solve(string A) {
    int n=A.length();
    map<char,int>mp;

    string ans="";

    for(auto i:A)mp[i]++;

    for(auto i:A){
        if(mp[i]!=-1){
            ans+=i;
            ans+=to_string(mp[i]);
            mp[i]=-1;
        }
    }
    return ans;
}



