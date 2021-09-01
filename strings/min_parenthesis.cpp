int Solution::solve(string A){
    // using stack
    stack<char> s;
    for(int i = 0; i < A.length(); i++)
    {
       if(A[i] == '(')
           s.push(A[i]);
       else
       {
           if(s.empty())
                s.push(A[i]);
           else
           {
                if(s.top() != '(')
                    s.push(A[i]);
                else 
                    s.pop();
            }
       }
    }
   return s.size();
   // without stack
   int count = 0, ans = 0;
   for (int i = 0; i < A.length(); i++)
   {
       if(A[i] == '(')
           count += 1;
        else
        {
            count -= 1;
            if(count < 0)
            {
                ans += 1;
                count = 0;
            }
        }
   }
   ans += count;
   return ans;
}