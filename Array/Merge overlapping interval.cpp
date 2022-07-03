/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool compare(Interval A,Interval B) 
{
    return A.start < B.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    sort(A.begin(),A.end(),compare);
    
    vector<Interval>result;
    
    Interval x=Interval(A[0].start,A[0].end);
    
    for(int i=0;i<A.size();i++)
    {
        if(x.end>=A[i].start)
        {
            x.end=max(x.end,A[i].end);
        }
        else
        {
            result.push_back(x);
            x=Interval(A[i].start,A[i].end);
        }
    }
    result.push_back(x);
    
    return result;
}
