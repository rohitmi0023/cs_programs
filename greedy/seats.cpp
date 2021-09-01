int Solution::seats(string A) {
    vector<int> seat;
    for (int i = 0; i < A.size(); i++){
        if(A[i] == 'x')
            seat.push_back(i);
    }
    int ans = 0, mod=10000003, sz = seat.size(), mid = sz/2;
    for (int i = 0; i < sz; i++){
        ans += (abs(seat[mid] - seat[i]) - abs(mid - i)) % mod;
        ans %= mod;
    }
    return ans;
}