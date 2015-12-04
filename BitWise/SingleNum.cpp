/*
PROBLEM STATEMENT:

  There exists one number in an array where each number has a copy, except this number. Find this number.
  
PARAMETERS:
  
  vector<int> A
*/
  
    int temp = A[0];
    for(size_t i = 1; i < A.size(); ++i)
        temp ^= A[i];
    return temp;
