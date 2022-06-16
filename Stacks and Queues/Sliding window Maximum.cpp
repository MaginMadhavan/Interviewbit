vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
          
    vector<int> v;
    deque<int> d;
   for(int i=0;i<A.size();i++)
   {
       if( !d.empty() and d.front()<=i-B)
       d.pop_front();
       
       while(!d.empty() and A[d.back()]<=A[i])
       d.pop_back();
    
       d.push_back(i);
       
       if(i>=B-1)v.push_back(A[d.front()]);
   }
    
    return v;
}



