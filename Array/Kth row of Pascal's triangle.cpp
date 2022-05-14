vector<int> Solution::getRow(int n) {
    vector <int> ans;
    int c = 1;
    for (int i = 1; i <= n+1; i++) {
        ans.push_back(c);
        c = c*(n+1-i) / i;
    }
    return ans;
}
