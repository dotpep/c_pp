#include <iostream>

using namespace std;

void sample1(){
    int arr[5][5] = {
        // Sum of Each Rows of 2D array
        // base[1...4] sum(+)= 14
        //       max:
        {1, 2, 3, 4, 5},  // 14 + 1 sum() = 15
        {2, 2, 3, 4, 6},  // sum() = 16 + 1 = 17
        {3, 2, 3, 4, 7},  // sum() = 17 + 2 = 19
        {4, 2, 3, 4, 8},  // sum() = 18 + 3 = 20
        {5, 2, 3, 4, 9},  // sum() = 19 + 4 = 23
        // Sum of Each Rows of 2D array
        // 1) 15
        // 2) 2 * 5 = 10
        // 3) 3 * 5 = 15
        // 4) 4 * 5 = 20
        // 5) 35
    };

    int sumEachRow = 0, maxEachRow = arr[0][0];
    int sumEachColumn = 0;

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrRowNum = arr[i][j];
            sumEachRow += arrRowNum;

            if (maxEachRow < arrRowNum)
            {
                maxEachRow = arrRowNum;
            }

            int arrColumnNum = arr[j][i];
            sumEachColumn += arrColumnNum;
        }

        cout << i << ") sumEachRow: " << sumEachRow << endl;
        cout << i << ") maxEachRow: " << maxEachRow << endl;
        cout << i << ") sumEachColumn: " << sumEachColumn << endl;
        cout << "---" << endl;

        // reset values
        sumEachRow = 0;
        maxEachRow = arr[0][0];
        sumEachColumn = 0;
    }

    //cout << "---" << endl;
    //cout << "array rows: " << endl;
    //cout << arr[0][0] << " " << arr[0][1] << " " << arr[0][2] << " " << arr[0][3] << " " << arr[0][4] << endl;
    //cout << arr[1][0] << " " << arr[1][1] << " " << arr[1][2] << " " << arr[1][3] << " " << arr[1][4] << endl;
    //cout << "array columns: " << endl;
    //cout << arr[0][0] << " " << arr[1][0] << " " << arr[2][0] << " " << arr[3][0] << " " << arr[4][0] << endl;
}

void task1(){
    int arr[5][5] = {
        {-3, 1, 3, 4, -5},
        {6, 8, -9, 7, -10},
        {10, -13, -14, -5, 15},
        {16, 6, 14, 6, 4},
        {5, -11, 17, -9, 10}
    };

    int negativeOddSum = 0, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrRowNum = arr[i][j];
            if (arrRowNum < 0)
            {
                if (arrRowNum % 2 != 0)
                {
                    negativeOddSum += arrRowNum;
                }
            }
            if (maxNum < arrRowNum)
            {
                maxNum = arrRowNum;
            }
        }

        cout << "For each Row" << endl;
        cout << "negative odd sum: " << negativeOddSum << endl;
        cout << "max num: " << maxNum << endl;
        cout << "---" << endl;

        negativeOddSum = 0;
        maxNum = arr[i][0];
    }
}

void task2(){
    int arr[7][7] = {
        {-2, -2, 3, -4, -5, -10, 2},
        {-6, -8, 9, 7, -10, -1, 2},
        {10, -13, 14, 5, 15, 1, 2},
        {16, 6, -14, 6, -4, -1, 2},
        {-5, 11, 17, -9, -10, 1, -2},
        {-4, -11, -17, -9, 10, -1, 2},
        {5, 11, 17, 9, -10, 1, -2},
    };

    int negativeEvenProduct = 1, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrColumnNum = arr[j][i];
            if (arrColumnNum < 0)
            {
                if (arrColumnNum % 2 == 0)
                {
                    negativeEvenProduct *= arrColumnNum;
                }
            }
            if (maxNum < arrColumnNum)
            {
                maxNum = arrColumnNum;
            }
        }

        cout << "For each Column" << endl;
        cout << "negative even product: " << negativeEvenProduct << endl;
        cout << "max num: " << maxNum << endl;
        cout << "---" << endl;

        negativeEvenProduct = 1;
        maxNum = arr[0][i];
    }
}

void task3(){
    int arr[3][3] = {
        {2, 1, 3},
        {-6, -8, 9},
        {10, -13, 14},
    };

    int minNum = INT_MAX, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrRowNum = arr[i][j];
            if (minNum > arrRowNum)
            {
                minNum = arrRowNum;
            }
            if (maxNum < arrRowNum)
            {
                maxNum = arrRowNum;
            }
        }

        cout << "For each Row" << endl;
        cout << "min num: " << minNum << endl;
        cout << "max num: " << maxNum << endl;
        cout << "---" << endl;

        minNum = INT_MAX;
        maxNum = arr[i][0];
    }
}

void task4(){
    int arr[7][7] = {
        {2, -2, 3, 4, 5, 1, 2},
        {6, -8, 9, 7, 10, -1, 2},
        {10, -13, 14, 5, 15, 1, 2},
        {16, 6, 14, 6, 4, -1, 2},
        {5, 11, 17, -9, 10, 1, 2},
        {5, -11, -17, 9, 10, -1, 2},
        {5, 11, 17, 9, 10, 1, 2},
    };

    int product = 1, positiveCount = 0;

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrColumnNum = arr[j][i];
            product *= arrColumnNum;

            if (arrColumnNum > 0)
            {
                positiveCount++;
            }
        }

        cout << "For each Column" << endl;
        cout << "product: " << product << endl;
        cout << "positive count: " << positiveCount << endl;
        cout << "---" << endl;

        product = 1;
        positiveCount = 0;
    }
}

void task5(){
    int arr[4][4] = {
        {2, -2, 3, 4},
        {6, -8, 9, 7},
        {10, -13, 14, 5},
        {16, 6, 14, 6},
    };

    int positiveEvenSum = 0, minNum = INT_MAX;

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrRowNum = arr[i][j];

            if (minNum > arrRowNum)
            {
                minNum = arrRowNum;
            }
            
            if (arrRowNum > 0)
            {
                if (arrRowNum % 2 == 0)
                {
                    positiveEvenSum += arrRowNum;
                }
            }
        }

        cout << "For each Row" << endl;
        cout << "positive even sum: " << positiveEvenSum << endl;
        cout << "min num: " << minNum << endl;
        cout << "---" << endl;

        positiveEvenSum = 0;
        minNum = INT_MAX;
    }
}

void task6(){
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

    int maxNum = arr[0][0], positiveCount = 0;

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrColumnNum = arr[j][i];

            if (arrColumnNum > 0)
            {
                positiveCount++;
            }

            if (maxNum < arrColumnNum)
            {
                maxNum = arrColumnNum;
            }
        }

        cout << "For each Column" << endl;
        cout << "positive count: " << positiveCount << endl;
        cout << "max num: " << maxNum << endl;
        cout << "---" << endl;

        positiveCount = 0;
        maxNum = arr[0][i];
    }
}

void task7(){
    int arr[5][5] = {
        {2, -2, 3, 4, 1},
        {6, -8, 9, 7, 1},
        {10, -13, 14, 5, 1},
        {16, 6, 14, 6, 1},
        {17, -6, 14, 6, 1},
    };

    int negativeEvenSum = 0, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrColumnNum = arr[j][i];
            if (arrColumnNum < 0)
            {
                if (arrColumnNum % 2 == 0)
                {
                    negativeEvenSum += arrColumnNum;
                }
            }
            if (maxNum < arrColumnNum)
            {
                maxNum = arrColumnNum;
            }
        }

        cout << "For each Column" << endl;
        cout << "negative even sun: " << negativeEvenSum << endl;
        cout << "max num: " << maxNum << endl;
        cout << "---" << endl;

        negativeEvenSum = 0;
        maxNum = arr[0][i];
    }
}

void task8(){
    int arr[7][7] = {
        {2, -2, 3, 4, 5, 1, 2},
        {6, -8, 9, 7, 10, -1, 2},
        {-10, -13, 14, 5, 15, 1, 2},
        {16, 6, 14, 6, 4, -1, 2},
        {5, 11, 17, -9, 10, 1, 2},
        {5, -11, -17, 9, 10, -1, 2},
        {5, 11, 17, 9, 10, 1, 2},
    };

    int negativeCount = 0, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrColumnNum = arr[j][i];
            if (arrColumnNum < 0)
            {
                negativeCount++;
            }
            if (maxNum < arrColumnNum)
            {
                maxNum = arrColumnNum;
            }
        }

        cout << "For each Column" << endl;
        cout << "negative count: " << negativeCount << endl;
        cout << "max num: " << maxNum << endl;
        cout << "---" << endl;

        negativeCount = 0;
        maxNum = arr[0][i];
    }
}

void task9(){
    int arr[5][5] = {
        {2, -2, 3, 4, 1},
        {6, -8, 9, 7, 1},
        {10, -13, 14, 5, 1},
        {16, 6, 14, 6, 1},
        {17, -6, 14, 6, 1},
    };

    int minNum = INT_MAX, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrRowNum = arr[i][j];
            if (minNum > arrRowNum)
            {
                minNum = arrRowNum;
            }
            if (maxNum < arrRowNum)
            {
                maxNum = arrRowNum;
            }
        }

        cout << "For each Row" << endl;
        cout << "min num: " << minNum << endl;
        cout << "max num: " << maxNum << endl;
        cout << "---" << endl;

        minNum = INT_MAX;
        maxNum = arr[i][0];
    }
}

void task10(){
    int arr[7][7] = {
        {2, -2, 3, 4, 5, 1, 2},
        {6, -8, 9, 7, 10, -1, 2},
        {10, -13, 14, 5, 15, 1, 2},
        {16, 6, 14, 6, 4, -1, 2},
        {5, 11, 17, -9, 10, 1, 2},
        {5, -11, -17, 9, 10, -1, 2},
        {5, 11, 17, 9, 10, 1, 2},
    };

    int product = 1, negativeCount = 0;

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrRowNum = arr[i][j];
            product *= arrRowNum;

            if (arrRowNum > 0)
            {
                negativeCount++;
            }
        }

        cout << "For each Row" << endl;
        cout << "product: " << product << endl;
        cout << "negative count: " << negativeCount << endl;
        cout << "---" << endl;

        product = 1;
        negativeCount = 0;
    }
}

void task11(){
    int arr[4][4] = {
        {2, -2, 3, 4},
        {6, -8, 9, 7},
        {10, -13, 14, 5},
        {16, 6, 14, 6},
    };

    int positiveEvenSum = 0, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrColumnNum = arr[j][i];

            if (maxNum < arrColumnNum)
            {
                maxNum = arrColumnNum;
            }
            
            if (arrColumnNum > 0)
            {
                if (arrColumnNum % 2 == 0)
                {
                    positiveEvenSum += arrColumnNum;
                }
            }
        }

        cout << "For each Column" << endl;
        cout << "positive even sum: " << positiveEvenSum << endl;
        cout << "max num: " << maxNum << endl;
        cout << "---" << endl;

        positiveEvenSum = 0;
        maxNum = arr[0][i];
    }
}

void task12(){
    int arr[6][6] = {
        {2,  -2,  3,   4,  5,  1},
        {6,  -8,  9,   7,  10,  -1},
        {10, -13, 14,  5,  15,  1},
        {16, 6,   14,  6,  4,  -1},
        {5,  11,  17,  -9, 10,  1},
        {5,  -11, -17, 9,  10, -1},
    };

    int positiveProduct = 1, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrRowNum = arr[i][j];

            if (maxNum < arrRowNum)
            {
                maxNum = arrRowNum;
            }
            
            if (arrRowNum > 0)
            {
                positiveProduct *= arrRowNum;
            }
        }

        cout << "For each Row" << endl;
        cout << "product sum: " << positiveProduct << endl;
        cout << "max num: " << maxNum << endl;
        cout << "---" << endl;

        positiveProduct = 1;
        maxNum = arr[i][0];
    }
}

void task13(){
    int arr[4][4] = {
        {2, -2, 3, 4},
        {6, -8, 9, 7},
        {10, -13, 14, 5},
        {16, 6, 14, 6},
    };

    int oddSum = 0, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrColumnNum = arr[j][i];

            if (maxNum < arrColumnNum)
            {
                maxNum = arrColumnNum;
            }
            
            if (arrColumnNum % 2 != 0)
            {
                oddSum += arrColumnNum;
            }
        }

        cout << "For each Column" << endl;
        cout << "odd sum: " << oddSum << endl;
        cout << "max num: " << maxNum << endl;
        cout << "---" << endl;

        oddSum = 0;
        maxNum = arr[0][i];
    }
}

void task14(){
    int arr[5][5] = {
        {2, 1, 3, 4, 5},
        {6, 8, 9, 7, 10},
        {10, 13, 14, 5, 15},
        {16, 6, 14, 6, 4},
        {5, 11, 17, 9, 10}
    };

    int evenProduct = 1, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrColumnNum = arr[j][i];

            if (maxNum < arrColumnNum)
            {
                maxNum = arrColumnNum;
            }
            
            if (arrColumnNum % 2 == 0)
            {
                evenProduct *= arrColumnNum;
            }
        }

        cout << "For each Column" << endl;
        cout << "even product: " << evenProduct << endl;
        cout << "max num: " << maxNum << endl;
        cout << "---" << endl;

        evenProduct = 1;
        maxNum = arr[0][i];
    }
}

void task15(){
    int arr[3][3] = {
        {2, 1, 3},
        {-6, -8, 9},
        {10, -13, 14},
    };

    int minPositiveEvenNum = INT_MAX, maxNegativeNum = INT_MIN;

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrRowNum = arr[i][j];
            if (minPositiveEvenNum > arrRowNum)
            {
                if (arrRowNum >= 0)
                {
                    if (arrRowNum % 2 == 0)
                    {
                        minPositiveEvenNum = arrRowNum;
                    }
                }
            }
            if (maxNegativeNum < arrRowNum)
            {
                if (arrRowNum < 0)
                {
                    maxNegativeNum = arrRowNum;
                }
            }

            //if (minPositiveEvenNum == INT_MAX)
            //{
            //    minPositiveEvenNum = 0;
            //}
            //if (maxNegativeNum == INT_MIN)
            //{
            //    maxNegativeNum = 0;
            //}
        }

        cout << "For each Row" << endl;
        cout << "min positive even num: " << minPositiveEvenNum << endl;
        cout << "max negative num: " << maxNegativeNum << endl;
        cout << "---" << endl;

        minPositiveEvenNum = INT_MAX;
        maxNegativeNum = INT_MIN;
    }
}

void task16(){
    int arr[6][6] = {
        {2, -2, 3, 4, 5, 1},
        {6, -8, 9, 7, 10, -1},
        {10, -13, 14, 5, 15, 1},
        {16, 6, 14, 6, 4, -1},
        {5, 11, 17, -9, 10, 1},
        {5, -11, -17, 9, 10, -1},
    };

    int sum = 0, positiveCount = 0;

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrColumnNum = arr[j][i];
            sum += arrColumnNum;

            if (arrColumnNum > 0)
            {
                positiveCount++;
            }
        }

        cout << "For each Column" << endl;
        cout << "sum: " << sum << endl;
        cout << "positive count: " << positiveCount << endl;
        cout << "---" << endl;

        sum = 0;
        positiveCount = 0;
    }
}

void task17(){
    int arr[5][5] = {
        {-3, 1, 3, 4, -5},
        {6, 8, -9, 7, -10},
        {10, -13, -14, -5, 15},
        {16, 6, 14, 6, 4},
        {5, -11, 17, -9, 10}
    };

    int positiveOddProduct = 1, minNum = INT_MAX;

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrRowNum = arr[i][j];

            if (minNum > arrRowNum)
            {
                minNum = arrRowNum;
            }
            
            if (arrRowNum > 0)
            {
                if (arrRowNum % 2 != 0)
                {
                    positiveOddProduct *= arrRowNum;
                }
            }
        }

        cout << "For each Row" << endl;
        cout << "positive odd product: " << positiveOddProduct << endl;
        cout << "min num: " << minNum << endl;
        cout << "---" << endl;

        positiveOddProduct = 1;
        minNum = INT_MAX;
    }
}

void task18(){
    int arr[8][8] = {
        {2, -2, 3, -4, 5, 1, 2, 1},
        {6, -8, 9, 7, 10, -1, -2, -2},
        {10, -13, -14, 5, 15, 1, -2, 1},
        {16, 6, 14, 6, -4, -1, -2, -10},
        {5, 11, 17, -9, 10, 1, 2, 1},
        {5, -11, -17, 9, -10, -1, 2, -10},
        {5, 11, -18, -9, -13, 1, 2, 1},
        {5, 11, 21, 9, 10, 1, 2, 2},
    };

    int negativeEvenCount = 0, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrRowNum = arr[i][j];
            if (arrRowNum < 0)
            {
                if (arrRowNum % 2 == 0)
                {
                    negativeEvenCount++;
                }
            }
            if (maxNum < arrRowNum)
            {
                maxNum = arrRowNum;
            }
        }

        cout << "For each Row" << endl;
        cout << "negative even count: " << negativeEvenCount << endl;
        cout << "max num: " << maxNum << endl;
        cout << "---" << endl;

        negativeEvenCount = 0;
        maxNum = arr[i][0];
    }
}

void task19(){
    int arr[6][6] = {
        {-2, -2, 3, -4, -5, -10},
        {-6, -8, 9, 7, -10, -1},
        {10, -13, 14, 5, 15, 1},
        {16, 6, -14, 6, -4, -1},
        {-5, 11, 17, -9, -10, 1},
        {-4, -11, -17, -9, 10, -1},
    };

    int negativeOddProduct = 1, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrColumnNum = arr[j][i];
            if (arrColumnNum < 0)
            {
                if (arrColumnNum % 2 != 0)
                {
                    negativeOddProduct *= arrColumnNum;
                }
            }
            if (maxNum < arrColumnNum)
            {
                maxNum = arrColumnNum;
            }
        }

        cout << "For each Column" << endl;
        cout << "negative odd product: " << negativeOddProduct << endl;
        cout << "max num: " << maxNum << endl;
        cout << "---" << endl;

        negativeOddProduct = 1;
        maxNum = arr[0][i];
    }
}

void task20(){
    int arr[7][7] = {
        {2, -2, 3, 4, 5, 1, 2},
        {6, -8, 9, 7, 10, -1, 2},
        {-10, -13, 14, 5, 15, 1, 2},
        {16, 6, 14, 6, 4, -1, 2},
        {5, 11, 17, -9, 10, 1, 2},
        {5, -11, -17, 9, 10, -1, 2},
        {5, 11, 17, 9, 10, 1, 2},
    };

    int negativeOddCount = 0, maxNum = arr[0][0];

    for (int i = 0; i < size(arr); i++)
    {
        for (int j = 0; j < size(arr); j++)
        {
            int arrColumnNum = arr[j][i];
            if (arrColumnNum < 0)
            {
                if (arrColumnNum % 2 != 0)
                {
                    negativeOddCount++;
                }
            }
            if (maxNum < arrColumnNum)
            {
                maxNum = arrColumnNum;
            }
        }

        cout << "For each Column" << endl;
        cout << "negative odd count: " << negativeOddCount << endl;
        cout << "max num: " << maxNum << endl;
        cout << "---" << endl;

        negativeOddCount = 0;
        maxNum = arr[0][i];
    }
}

int main(){
    task20();
    //cout << "---" << endl;
    //cout << 2 * -2 * 3 * 4 * 5 * 1 * 2 << endl;
}