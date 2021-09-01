int Solution::searchInsert(vector<int> &A, int B) {
    int low = 0; int high = A.size() - 1; int mid;
    while(low <= high){
        mid = (low + high ) / 2;
        if(A[mid] == B) return mid;
        else if(A[mid] < B) low = mid + 1;
        else high = mid - 1;
    } return low;
}
