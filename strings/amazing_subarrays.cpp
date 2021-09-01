int Solution::solve(string A){
    int n = A.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        switch (A[i])
        {
        case 'a':
            count = (count + n - i) % 1003;
            break;
        case 'e':
            count = (count + n - i) % 1003;
            break;
        case 'i':
            count = (count + n - i) % 1003;
            break;
        case 'o':
            count = (count + n - i) % 1003;
            break;
        case 'u':
            count = (count + n - i) % 1003;
            break;
        case 'A':
            count = (count + n - i) % 1003;
            break; 
        case 'E':
            count = (count + n - i) % 1003;
            break;
        case 'I':
            count = (count + n - i) % 1003;
            break;
        case 'O':
            count = (count + n - i) % 1003;
            break;
        case 'U':
            count = (count + n - i) % 1003;
            break;   
        }
    }
    return count;
}