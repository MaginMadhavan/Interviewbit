int Solution::maxProfit(const vector<int> &A) {
    int max_=0, mini=INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        mini=min(mini,A[i]);//keep track of the minimum in the left
        max_=max(max_,A[i]-mini);
    }
    return max_;
}
