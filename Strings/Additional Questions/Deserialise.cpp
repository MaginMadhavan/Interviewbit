vector<string> Solution::deserialize(string A) {
    vector<string> res;

    int start = 0, i=0;
    while(i<A.length()){
        while(i<A.length() && A[i]>=97 && A[i]<=122) i++;
        res.push_back(A.substr(start, i-start));
        while(i<A.length() && (A[i]>=48 && A[i]<=57)) i++;
        i++;
        start = i;
    }
    
    return res;
}



