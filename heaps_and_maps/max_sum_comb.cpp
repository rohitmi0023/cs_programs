vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int N = A.size();
    priority_queue<pair<int, pair<int, int>>> pq;
    set<pair<int, int> > my_set;
 
    // initialize the heap with the maximum sum
    // combination ie (A[N - 1] + B[N - 1])
    // and also push indices (N - 1, N - 1) along
    // with sum.
    pq.push(make_pair(A[N - 1] + B[N - 1],
                      make_pair(N - 1, N - 1)));
 
    my_set.insert(make_pair(N - 1, N - 1));
 
    // iterate upto K
    for (int count = 0; count < K; count++)
    {
        // tuple format (sum, (i, j)).
        pair<int, pair<int, int> > temp = pq.top();
        pq.pop();
 
        cout << temp.first << endl;
 
        int i = temp.second.first;
        int j = temp.second.second;
 
        int sum = A[i - 1] + B[j];
 
        // insert (A[i - 1] + B[j], (i - 1, j))
        // into max heap.
        pair<int, int> temp1 = make_pair(i - 1, j);
 
        // insert only if the pair (i - 1, j) is
        // not already present inside the map i.e.
        // no repeating pair should be present inside
        // the heap.
        if (my_set.find(temp1) == my_set.end())
        {
            pq.push(make_pair(sum, temp1));
            my_set.insert(temp1);
        }
 
        // insert (A[i] + B[j - 1], (i, j - 1))
        // into max heap.
        sum = A[i] + B[j - 1];
        temp1 = make_pair(i, j - 1);
 
        // insert only if the pair (i, j - 1)
        // is not present inside the heap.
        if (my_set.find(temp1) == my_set.end())
        {
            pq.push(make_pair(sum, temp1));
            my_set.insert(temp1);
        }
    }
}