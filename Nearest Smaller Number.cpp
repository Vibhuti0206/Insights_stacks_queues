vector<int> Solution::prevSmaller(vector<int> &A) {
   int n = A.size();
   stack<int> s1;
   vector<int> G;
   for(int i=0;i<n;i++)
   {
       while(!s1.empty() && s1.top() >= A[i])
        s1.pop();
       if(s1.empty())
        G.push_back(-1);
       else
        G.push_back(s1.top());
      s1.push(A[i]);
   }
 return G;
}
