// Balanced parenthesis
int Solution::solve(string A){
    stack<char> s;
    for (int i = 0; i < A.length(); i++)
    {
        if (A[i] == ')')
        {
            if(s.empty())
                return 0;
            s.pop();
        }
        else
            s.push(A[i]);
    }
    return s.empty() ? 1 : 0;
}

// nearest smaller element
vector<int> Solution::prevSmaller(vector<int> &A){
    stack<int> s;
    vector<int> v(A.size(), -1);
    for (int i = 0; i < A.size(); i++)
    {
        while(!s.empty() && s.top() >= A[i])
            s.pop();
        if(!s.empty)
            v[i] = s.top();
        s.push(A[i]);
    }
    return v;
}

// Evaluate expression
int Solution::evalRPN(vector<string> &A){
    stack<string> k;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == "/" || A[i] == "*" || A[i] == "+" || A[i] == "-")
        {
            int y = stoi(k.top());
            k.pop();
            int x = stoi(k.top());
            k.pop();
            switch (A[i][0])
            {
            case '+':
                k.push(to_string(x + y));
                break;
            case '-':
                k.push(to_string(x - y));
                break;
            case '*':  
                k.push(to_string(x * y));
                break;
            case '/':  
                k.push(to_string(x / y));
                break;
            }
        }
        else
        {
            k.push(A[i]);
        }
    }
    return stoi(k.top());
}
