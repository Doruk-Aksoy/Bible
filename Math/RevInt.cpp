/*
PROBLEM STATEMENT:

  Reverse a given integer A. If it's reverse overflows, return 0.
  
PARAMETERS:

  int A.
*/

    long long int res = 0;
    int isneg = A < 0 ? -1 : 1;
    
    A = A * isneg;
    
    // overflow case 1, INT_MIN
    if(A < 0 && !isneg)
        return 0;
    
    while(A) {
        res *= 10;
        res += A % 10;
        
        // overflow case 2, addition
        if(res > INT_MAX || res * isneg < INT_MIN )
            return 0;
        
        A /= 10;
    }
    
    return res * isneg;
