stack<int> s;
stack<int> m;

MinStack::MinStack(){
    while(!s.empty())
        s.pop();
    while (!m.empty())
        m.pop();
}

void MinStack::push(int x) {
    
}

