    /*
    PROBLEM STATEMENT:
        
        Find all set bits in an integer A.
        
    PARAMETERS:
    
        ((long long) unsigned) int A
    */
    
    int res = 0;
    while(A) {
        res += A & 1;
        A >>= 1;
    }
    return res;
