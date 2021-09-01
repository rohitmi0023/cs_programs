int Solution::sqrt(int A) {
    int low = 0, high = A, mid;
    if(A == 1 || A == 0)
        return A;
    while (low < high)
    {
        mid = low + (high - low) / 2;
        int mult = A / mid;
        if (high - low == 1) 
        {
            return low;
        }
        else if (mid > mult)
        {
            high = mid;
        }
        else if (mid < mult)
        {
            low = mid;
        }
        else
            return mid;
    }
}
