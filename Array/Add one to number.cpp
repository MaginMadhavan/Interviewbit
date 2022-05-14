vector<int> Solution::plusOne(vector<int> &v) {

  int n = v.size();
     
    int c=1;
    for(int i=n-1;i>=0;i--){
        v[i]=v[i]+c;
        c=v[i]/10;
        v[i]=v[i]%10;
        
        if(c==0) break;
    }
    
    int i=0;
    
    vector<int> ans;
    if(c>0){
        ans.push_back(c);
    }
    else{
        while(v[i]==0) i++;
    }
    for(i;i<n;i++){
        ans.push_back(v[i]);
    }

    return ans;
}
