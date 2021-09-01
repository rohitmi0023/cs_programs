int Solution::braces(string A){
    stack<char> s;
    int ans = 0;
    for (int i = 0; i < A.length(); i++)
    {
        if(A[i] == '(' || A[i] == '+' || A[i] == '-' || A[i] == '*' || A[i] == '/')
            s.push(A[i]);
        if(A[i] == ')')
        {
            if(s.top() == '(')
                return 1;
            else
            {
                while (s.top() == '+' || s.top() == '-' || s.top() == '*' || s.top() == '/')
                    s.pop();
                s.pop();
            }
        }
    }
    return 0;
}