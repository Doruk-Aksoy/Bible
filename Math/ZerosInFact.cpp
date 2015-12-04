/*
PROBLEM STATEMENT:

  Find the trailing zeros of a given number's factorial.
  
PARAMETERS:

  int A
*/

    int fives = 0;
    int temp;
    while((temp = A / 5)) {
        fives += temp;
        A /= 5;
    }
    return fives;
