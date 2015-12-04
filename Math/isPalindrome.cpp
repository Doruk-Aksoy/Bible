/*
PROBLEM STATEMENT:

  Check if an integer A is palindrome or not.
  
PARAMETERS:

  int A
*/

int getdigits(int A) {
    int res = 0;
    
    while(A) {
        ++res;
        A /= 10;
    }
    
    return res;
}

    if(A < 0)
        return false;
    int digitnum = getdigits(A), temp = 0;
    bool isodd = false;
    if(digitnum & 1)
        isodd = true;
    digitnum >>= 1;
    for(int i = 0; i < digitnum; ++i) {
        temp *= 10;
        temp += A % 10;
        A /= 10;
    }
    if(isodd)
        A /= 10;
    if(temp == A)
        return true;
    return false;
