#include <iostream>

using namespace std;

void task1(){
    int arr[5][5] = {
        {2, 1, 3, 4, 5},
        {6, 8, 9, 7, 10},
        {10, 13, 14, 5, 15},
        {16, 6, 14, 6, 4},
        {5, 11, 17, 9, 10}
    };

    int minNumOdd = INT_MAX, minNum = INT_MAX;;

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrNum = arr[i][j];
            if (minNumOdd > arrNum)
            {
                if (arrNum % 2 != 0)
                {
                    minNumOdd = arrNum;
                }
                minNum = arrNum;
            }
        }
    }

    cout << minNumOdd << endl;
    cout << minNum << endl;
}

void task2(){
    int arr[7][7] = {
        {2, -2, 3, 4, 5, 1, 2},
        {6, -8, 9, 7, 10, -1, 2},
        {10, -13, 14, 5, 15, 1, 2},
        {16, 6, 14, 6, 4, -1, 2},
        {5, 11, 17, -9, 10, 1, 2},
        {5, -11, -17, 9, 10, -1, 2},
        {5, 11, 17, 9, 10, 1, 2},
    };

    int diagonalProduct = 1, positiveDiagonalCount = 0;

    for (int i = 0; i < size(arr); i++)
    {
        int diagonal = arr[i][i];
        if (diagonal >= 0)
        {
            positiveDiagonalCount++;
        }
        diagonalProduct *= diagonal;
    }

    cout << "product diagonal: " << diagonalProduct << endl;
    cout << "positive diagonal count: " << positiveDiagonalCount << endl;

    //cout << "---" << endl;
    //cout << "product diagonal: " << arr[0][0] * arr[1][1] * arr[2][2] * arr[3][3] * arr[4][4] * arr[5][5] * arr[6][6] << endl;

    //cout << "---" << endl;
    //cout << arr[0][0] << endl;
    //cout << arr[1][1] << endl;
    //cout << arr[2][2] << endl;
    //cout << arr[3][3] << endl;
    //cout << arr[4][4] << endl;
    //cout << arr[5][5] << endl;
    //cout << arr[6][6] << endl;
}

void task3(){
    int arr[4][4] = {
        {2, -2, 3, 4},
        {6, -8, 9, 7},
        {10, -13, 14, 5},
        {16, 6, 14, 6},
    };

    int positiveDiagonalSum = 0, minNum = INT_MAX;

    for (int i = 0; i < size(arr); i++)
    {
        int diagonal = arr[i][i];
        if (diagonal >= 0)
        {
            positiveDiagonalSum += diagonal;
        }

        for (int j = 0; j < size(arr); j++)
        {
            int arrNum = arr[i][j];
            if (minNum > arrNum)
            {
                minNum = arrNum;
            }
        }
    }

    cout << "positive diagonal sum: " << positiveDiagonalSum << endl;
    cout << "min num: " << minNum << endl;
}

void task4(){
    int arr[6][6] = {
        {2,  -2,  3,   4,  5,  1},
        {6,  -8,  9,   7,  10,  -1},
        {10, -13, 14,  5,  15,  1},
        {16, 6,   14,  6,  4,  -1},
        {5,  11,  17,  -9, 10,  1},
        {5,  -11, -17, 9,  10, -1},
    };

    int positiveDiagonalProduct = 1;

    for (int i = 0; i < size(arr); i++)
    {
        int diagonal = arr[i][i];
        if (diagonal >= 0)
        {
            positiveDiagonalProduct *= diagonal;
        }
    }

    cout << "positive diagonal product: " << positiveDiagonalProduct << endl;
}

void task5(){
    int arr[5][5] = {
        {2,  -2,  3,   4,  5},
        {6,  -8,  9,   7,  10},
        {10, -13, 14,  5,  15},
        {16, 6,   14,  6,  4},
        {5,  11,  17,  -9, 10},
    };

    int negativeDiagonalSum = 0, minNum = INT_MAX;

    for (int i = 0; i < size(arr); i++)
    {
        int diagonal = arr[i][i];
        if (diagonal < 0)
        {
            negativeDiagonalSum += diagonal;
        }

        for (int j = 0; j < size(arr); j++)
        {
            int arrNum = arr[i][j];
            if (minNum > arrNum)
            {
                minNum = arrNum;
            }
        }
    }

    cout << "negative sum: " << negativeDiagonalSum << endl;
    cout << "min num: " << minNum << endl;
}

void task6(){
    int arr[7][7] = {
        {2, -2, 3, 4, 5, 1, 2},
        {6, -8, 9, 7, 10, -1, 2},
        {10, -13, 14, 5, 15, 1, 2},
        {16, 6, 14, 6, 4, -1, 2},
        {5, 11, 17, -9, 10, 1, 2},
        {5, -11, -17, 9, 10, -1, 2},
        {5, 11, 17, 9, 10, 1, 2},
    };

    int negativeDiagonalProduct = 1, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        int diagonal = arr[i][i];
        if (diagonal < 0)
        {
            negativeDiagonalProduct *= diagonal;
        }

        for (int j = 0; j < size(arr); j++)
        {
            int arrNum = arr[i][j];
            if (maxNum < arrNum)
            {
                maxNum = arrNum;
            }
        }
    }

    cout << "negative diagonal product: " << negativeDiagonalProduct << endl;
    cout << "max num: " << maxNum << endl;
}

void task7(){
    int arr[3][3] = {
        {2, -2, 3},
        {6, -8, 9},
        {10, -13, -14},
    };

    int minNum = INT_MAX, minNumOdd = INT_MAX;

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrNum = arr[i][j];
            if (minNumOdd > arrNum)
            {
                if (arrNum % 2 != 0)
                {
                    minNumOdd = arrNum;
                }
                minNum = arrNum;
            }
        }
    }

    cout << "min odd num: " << minNumOdd << endl;
    cout << "min num: " << minNum << endl;
}

void task8(){
    int arr[7][7] = {
        {2, -2, 3, 4, 5, 1, 2},
        {6, -8, 9, 7, 10, -1, 2},
        {10, -13, 14, 5, 15, 1, 2},
        {16, 6, 14, 6, 4, -1, 2},
        {5, 11, 17, -9, 10, 1, 2},
        {5, -11, -17, 9, 10, -1, 2},
        {5, 11, 18, 9, 10, 1, 2},
    };

    int positiveDiagonalProduct = 1, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        int diagonal = arr[i][i];
        if (diagonal >= 0)
        {
            positiveDiagonalProduct *= diagonal;
        }

        for (int j = 0; j < size(arr); j++)
        {
            if (maxNum < arr[i][j])
            {
                maxNum = arr[i][j];
            }
        }
    }

    cout << "positive diagonal product: " << positiveDiagonalProduct << endl;
    cout << "max num: " << maxNum << endl;
}

void task9(){
    int arr[4][4] = {
        {2, -2, 3, 4},
        {6, -8, 9, 7},
        {10, -13, 14, 5},
        {16, 6, 14, 6},
    };

    int positiveSum = 0, minNum = INT_MAX;

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrNum = arr[i][j];
            if (minNum > arrNum)
            {
                minNum = arrNum;
            }
            if (arrNum >= 0)
            {
                positiveSum += arrNum;
            }
        }
    }

    cout << "positive sum: " << positiveSum << endl;
    cout << "min num: " << minNum << endl;
}

void task10(){
    int arr[8][8] = {
        {2, -2, 3, 4, 5, 1, 2, 1},
        {6, -8, 9, 7, 10, -1, 2, 1},
        {10, -13, 14, 5, 15, 1, 2, 1},
        {16, 6, 14, 6, 4, -1, 2, 1},
        {5, 11, 17, -9, 10, 1, 2, 1},
        {5, -11, -17, 9, 10, -1, 2, 1},
        {5, 11, 18, 9, 10, 1, 2, 1},
        {5, 11, 21, 9, 10, 1, 2, 2},
    };

    int positiveDiagonalProduct = 1, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        int diagonal = arr[i][i];
        if (diagonal >= 0)
        {
            positiveDiagonalProduct *= diagonal;
        }
        
        for (int j = 0; j < size(arr); j++)
        {
            int arrNum = arr[i][j];
            if (maxNum < arrNum)
            {
                maxNum = arrNum;
            }
        }
    }

    cout << "positive diagonal product: " << positiveDiagonalProduct << endl;
    cout << "max num: " << maxNum << endl;
}

void task11(){
    int arr[5][5] = {
        {2, -2, 3, 4, 1},
        {6, -8, 9, 7, 1},
        {10, -13, 14, 5, 1},
        {16, 6, 14, 6, 1},
        {17, -6, 14, 6, 1},
    };

    int negativeSum = 0, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrNum = arr[i][j];
            if (maxNum < arrNum)
            {
                maxNum = arrNum;
            }
            if (arrNum < 0) {
                negativeSum += arrNum;
            }
        }
    }

    cout << "negative sum: " << negativeSum << endl;
    cout << "max num: " << maxNum << endl;
}

void task12(){
    int arr[7][7] = {
        {2, -2, 3, 4, 5, 1, 2},
        {6, -8, 9, 7, 10, -1, 2},
        {10, -13, 14, 5, 15, 1, 2},
        {16, 6, 14, 6, 4, -1, 2},
        {5, 11, 17, -9, 10, 1, 2},
        {5, -11, -18, 9, 10, -1, 2},
        {5, 11, 17, 9, 10, 1, 2},
    };

    int negativeDiagonalProduct = 1, minNum = INT_MAX;

    for (int i = 0; i < size(arr); i++)
    {
        int diagonal = arr[i][i];
        if (diagonal < 0)
        {
            negativeDiagonalProduct *= diagonal;
        }

        for (int j = 0; j < size(arr); j++)
        {
            int arrNum = arr[i][j];
            if (minNum > arrNum)
            {
                minNum = arrNum;
            }
        }
    }

    cout << "negative diagonal product: " << negativeDiagonalProduct << endl;
    cout << "min num: " << minNum << endl;
}

void task13(){
    int arr[6][6] = {
        {2,  -2,  3,   4,  5,  1},
        {6,  -8,  9,   7,  10,  -1},
        {10, -13, 14,  5,  15,  1},
        {16, 6,   14,  -7,  4,  -1},
        {5,  11,  17,  -9, 10,  1},
        {5,  -11, -17, 9,  10, -1},
    };

    int minNumDiagonalOdd = INT_MAX;

    for (int i = 0; i < size(arr); i++)
    {
        int diagonal = arr[i][i];
        if (minNumDiagonalOdd > diagonal)
        {
            if (diagonal % 2 != 0)
            {
                minNumDiagonalOdd = diagonal;
            }
        }
    }

    cout << minNumDiagonalOdd << endl;
}

void task14(){
    int arr[8][8] = {
        {2, -2, 3, 4, 5, 1, 2, 5},
        {6, -8, 9, 7, 10, -1, 2, 5},
        {10, -13, 14, 5, 15, 1, 2, 5},
        {16, 6, 14, 6, 4, -1, 2, 5},
        {5, 11, 17, -9, 10, 1, 2, 5},
        {5, -11, -17, 9, 10, -1, 2, 5},
        {5, 11, 17, 9, 10, 1, 2, 5},
        {5, 11, 17, 9, 10, 1, 2, 5},
    };

    int diagonalSum = 0, positiveDiagonalCount = 0;

    for (int i = 0; i < size(arr); i++)
    {
        int diagonal = arr[i][i];
        if (diagonal >= 0)
        {
            positiveDiagonalCount++;
        }
        diagonalSum += diagonal;
    }

    cout << "sum diagonal: " << diagonalSum << endl;
    cout << "positive diagonal count: " << positiveDiagonalCount << endl;
}

void task15(){
    int arr[5][5] = {
        {2, -2, 3, 4, 3},
        {6, -8, 9, 7, 4},
        {10, -13, 14, 5, 5},
        {16, 6, 14, 6, 7},
        {6, 6, 4, 6, 5},
    };

    int positiveDiagonalOddSum = 0;

    for (int i = 0; i < size(arr); i++)
    {
        int diagonal = arr[i][i];
        if (diagonal >= 0)
        {
            if (diagonal % 2 != 0)
            {
                positiveDiagonalOddSum += diagonal;
            }
        }
    }

    cout << "positive diagonal odd sum: " << positiveDiagonalOddSum << endl;
}

void task16(){
    int arr[7][7] = {
        {2, -2, 3, 4, 5, 1, 2},
        {6, -8, 9, 7, 10, -1, 2},
        {10, -13, 14, 5, 15, 1, 2},
        {16, 6, 14, 6, 4, -1, 2},
        {5, 11, 17, -9, 10, 1, 2},
        {5, -11, -17, 9, 10, -1, 2},
        {5, 11, 18, 9, 10, 1, 2},
    };

    int positiveDiagonalProduct = 1, positiveDiagonalSum = 0, minNum = INT_MAX;


    for (int i = 0; i < size(arr); i++)
    {
        int diagonal = arr[i][i];
        if (diagonal >= 0)
        {
            positiveDiagonalProduct *= diagonal;
            positiveDiagonalSum += diagonal;
        }

        for (int j = 0; j < size(arr); j++)
        {
            int arrNum = arr[i][j];
            if (minNum > arrNum)
            {
                minNum = arrNum;
            }
        }
    }

    cout << "positive diagonal product: " << positiveDiagonalProduct << endl;
    cout << "positive diagonal sum: " << positiveDiagonalSum << endl;
    cout << "min num: " << minNum << endl;
}

void task17(){
    int arr[5][5] = {
        {2, -2, 3, 4, 5},
        {6, -8, 9, 7, 10},
        {10, -13, 14, 5, 15},
        {16, 6, 24, 6, 4},
        {5, 11, 17, -9, 10},
    };

    int negativeDiagonalSum = 0, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        int diagonal = arr[i][i];
        if (diagonal < 0)
        {
            negativeDiagonalSum += diagonal;
        }

        for (int j = 0; j < size(arr); j++)
        {
            int arrNum = arr[i][j];
            if (maxNum < arrNum)
            {
                maxNum = arrNum;
            }
        }
    }

    cout << "negative diagonal sum: " << negativeDiagonalSum << endl;
    cout << "max num: " << maxNum << endl;
}

void task18(){
    int arr[7][7] = {
        {2, -2, 3, 4, 5, 1, 2},
        {6, -8, 9, 7, 10, -1, 2},
        {10, -13, 14, 5, 15, 1, 2},
        {16, 6, 14, 6, 4, -1, 2},
        {5, 11, 17, -9, 10, 1, 2},
        {5, -11, -17, 9, 10, -1, 2},
        {5, 11, 17, 9, 10, 1, -2},
    };

    int negativeDiagonalProduct = 1, minNum = INT_MAX;

    for (int i = 0; i < size(arr); i++)
    {
        int diagonal = arr[i][i];
        if (diagonal < 0)
        {
            negativeDiagonalProduct *= diagonal;
        }

        for (int j = 0; j < size(arr); j++)
        {
            int arrNum = arr[i][j];
            if (minNum > arrNum)
            {
                minNum = arrNum;
            }
        }
    }

    cout << "negative diagonal product: " << negativeDiagonalProduct << endl;
    cout << "min num: " << minNum << endl;
}

void task19(){
    int arr[3][3] = {
        {2, -2, 3},
        {6, -8, 9},
        {10, -13, -14},
    };

    int minNumOdd = INT_MAX, positiveSum = 0;

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrNum = arr[i][j];
            if (minNumOdd > arrNum)
            {
                if (arrNum % 2 != 0)
                {
                    minNumOdd = arrNum;
                }
            }
            if (arrNum >= 0)
            {
                positiveSum += arrNum;
            }
        }
    }

    cout << "min odd num: " << minNumOdd << endl;
    cout << "positive sum: " << positiveSum << endl;
}

void task20(){
    int arr[9][9] = {
        {2, -2, 3, 4, 5, 1, 2, 1, 9},
        {6, -8, 9, 7, 10, -1, 2, 1, 9},
        {10, -13, 14, 5, 15, 1, 2, 1, 9},
        {16, 6, 14, 6, 4, -1, 2, 1, 9},
        {5, 11, 17, -9, 10, 1, 2, 1, 9},
        {5, -11, -17, 9, 10, -1, 2, 1, 9},
        {5, 11, 18, 9, 10, 1, 2, 1, 9},
        {5, 11, 21, 9, 10, 1, 2, -2, 9},
        {5, 11, -21, 9, 10, 1, 2, 2, 1},
    };

    int positiveDiagonalProduct = 1, minDiagonalNum = INT_MAX, minNum = INT_MAX;

    for (int i = 0; i < size(arr); i++)
    {
        int diagonal = arr[i][i];
        if (diagonal >= 0)
        {
            positiveDiagonalProduct *= diagonal;
        }
        if (minDiagonalNum > diagonal)
        {
            minDiagonalNum = diagonal;
        }

        for (int j = 0; j < size(arr); j++)
        {
            int arrNum = arr[i][j];
            if (minNum > arrNum)
            {
                minNum = arrNum;
            }
        }
    }

    cout << "positive diagonal product: " << positiveDiagonalProduct << endl;
    cout << "min num: " << minNum << endl;
    cout << "min diagonal num: " << minDiagonalNum << endl;
}

int main(){
    task20();
}