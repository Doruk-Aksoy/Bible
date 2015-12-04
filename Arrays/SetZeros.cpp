/*
PROBLEM STATEMENT:

  Given a 2D Array, if there is a 0, set the column and row that 0 is at to all 0. Do it in-place.
  
PARAMETERS:

  vector<vector<int>> A
*/

    bool first = false;
    for (size_t j = 0; j < A[0].size(); ++j)
        if (!A[0][j])
            first = true;
    for (size_t i = 1; i < A.size(); ++i) 
        for (size_t j = 0; j < A[0].size(); ++j) 
            if (!A[i][j])
                A[i][0] = A[0][j] = 0;
    for (size_t i = 1; i < A.size(); ++i)
        if (!A[i][0])
            for (size_t j = 0; j < A[0].size(); ++j)
                A[i][j] = 0;
    for (size_t j = 0; j < A[0].size(); ++j)
        if(!A[0][j])
            for (size_t i = 0; i < A.size(); ++i)
                A[i][j] = 0;
    if (first)
        for (size_t j = 0; j < A[0].size(); ++j)
            A[0][j] = 0;
