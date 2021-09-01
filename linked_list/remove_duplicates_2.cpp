ListNode *Solution::deleteDuplicates2(ListNode *A){
    if(A == NULL || A->next == NULL)
        return A;
    ListNode *p = A, *pre = NULL, *q = p->next;
    int flag = 0;
    while (q)
    {
        while(q && (p->val == q->val))
        {
            q = q->next;
            flag = 1;
        }
        if(flag == 1)
        {
            if(pre)
                pre->next = q;
            else
                A = q;
            p = q;
            if(q)
                q = q->next;
            flag = 0;
        }
        else
        {
            pre = p;
            p = p->next;
            q = q->next;
        }
    }
    return A;
}