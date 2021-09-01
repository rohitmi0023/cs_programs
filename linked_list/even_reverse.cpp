ListNode *Solution::solve(ListNode *a){
    stack<int> s;
    ListNode *t = a;
    int count = 1;
    while (t != NULL)
    {
        if(count % 2 == 0)
            s.push(t->val);
        count += 1;
        t = t->next;
    }
    t = a;
    count = 1;
    while (t != NULL)
    {
        if(count % 2 == 0)
        {
            t->val = s.top();
            s.pop();
        }
        count += 1;
        t = t->next;
    }
    return a;
}