    int res = 0;
    while(A) {
        res += A & 1;
        A >>= 1;
    }
    return res;
