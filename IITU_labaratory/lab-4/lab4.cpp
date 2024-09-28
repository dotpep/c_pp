#include <iostream>

using namespace std;

void task1(){
    int arr[5] = {1,2,-1,4,-3};

    int posSum = 0, negSum = 0;
    for (int i = 0; i < size(arr); i++)
    {
        if (arr[i] >= 0)
        {
            posSum += arr[i];
        }
        else {
            negSum += arr[i];
        }
    }

    cout << "positive nums sum in array: " << posSum << endl << "negative nums sum in array: " << negSum << endl;
}

void task2(){
    int arr[8] = {2, 3, 8, -1, 9, 6, 1, 8};

    int maxNum = arr[0], maxNumIndex = 0;
    int minNum = INT_MAX, minNumIndex = 0;

    for (int i = 0; i < size(arr); i++)
    {
        if (maxNum < arr[i])
        {
            maxNum = arr[i];
            maxNumIndex = i;
        }
        else if (minNum > arr[i])
        {
            minNum = arr[i];
            minNumIndex = i;
        }
        //cout << arr[i] << "\t";
    }

    cout << "max value in array: " << maxNum << "\tmax num index in array: " << maxNumIndex << endl;
    cout << "min value in array: " << minNum << "\tmin num index in array: " << minNumIndex << endl;
}

void task3(){
    int arr[7] = {2, 3, 8, 2, 9, 4, 0};

    int minOdd = INT_MAX;
    
    for (int i = 0; i < size(arr); i++)
    {
        if (arr[i] % 2 != 0 && 
            arr[i] < minOdd)
        {
            minOdd = arr[i];
        }
    }

    cout << "min odd value in array: " << minOdd << endl;
}

void task4(){
    int arr[10] = {2, -7, 1, 2, -3, 6, -1, 9, 1, 6};

    int posSum = 0, posCountInMinToMax = 0;
    // min index = 1, max index = 7
    int minIndex = 0, maxIndex = 0;

    // max and min value indexes in array
    for (int i = 0; i < size(arr); i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    // positive count between min and max value of array
    for (int i = 0; i < size(arr); i++)
    {
        if (arr[(minIndex-1) + i] >= 0)
        {
            if (i == maxIndex)
            {
                break;
            }
            posCountInMinToMax++;
        }
    }

    // positive sum
    for (int i = 0; i < size(arr); i++)
    {
        if (arr[i] >= 0)
        {
            posSum += arr[i];
        }
    }
    

    cout << "positive nums sum in array: " << posSum << endl;
    cout << "positive nums count between minimun and maximum value of array: " << posCountInMinToMax << endl;
    cout << "array - min index: " << minIndex << " max index: " << maxIndex<< endl;
}

void task5(){
    int arr[15] = {2, -7, 1, 2, -3, 6, -1, 9, 1, 6, 5, 4, 6, 2, 8};

    int xPosSum = 0;
    string txtIsFound;

    for (int i = 0; i < size(arr); i++)
    {
        if (arr[i] != 5)
        {
            txtIsFound = "5 is NOT found!";
            continue;
        } else {
            for (int j = 0; j < size(arr); j++)
            {
                if (arr[j] >= 0)
                {
                    xPosSum += arr[j];
                }
            }

            txtIsFound = "5 is found!";
            break;
        }
    }
    cout << txtIsFound << " and x sum is: " << xPosSum << endl;
}

void task6(){
    int arr[12] = {2, -7, 1, 2, -3, 6, -1, 8, 1, -6, -5, 4};

    int negSum = 0, maxNum = arr[0];

    for (int i = 0; i < size(arr); i++)
    {
        if (arr[i] <= 0)
        {
            negSum += arr[i];
        }
        if (maxNum < arr[i])
        {
            maxNum = arr[i];
        }
    }

    cout << "negative nums sum in array: " << negSum << "\nmax value in array: " << maxNum << endl;
}

void task7(){
    int arr[8] = {2, -2, 1, 2, -3, 6, -1, 8};

    int minNum = arr[0], minNumIndex = 0;

    for (int i = 1; i < size(arr); i++)
    {
        if (minNum > arr[i])
        {
            minNum = arr[i];
            minNumIndex = i;
        }
    }

    cout << "min value in array: " << minNum << "\nmin value index in array: " << minNumIndex << endl;
}

void task8(){
    int arr[7] = {2, 3, 9, 2, 7, 6, 10};

    int maxOdd = 0;
    
    for (int i = 0; i < size(arr); i++)
    {
        if (arr[i] % 2 != 0 && 
            arr[i] > maxOdd)
        {
            maxOdd = arr[i];
        }
    }

    cout << "max odd value in array: " << maxOdd << endl;
}

void task9(){
    task4();
}

void task10(){
    int arr[9] = {2, 4, -1, 2, -3, 6, -1, 9, 0};

    int xPosSum = 0;
    string txtIsFound;

    for (int i = 0; i < size(arr); i++)
    {
        if (arr[i] != 0)
        {
            txtIsFound = "0 is NOT found!";
            continue;
        } else {
            for (int j = 0; j < size(arr); j++)
            {
                if (arr[j] >= 0)
                {
                    xPosSum += arr[j];
                }
            }

            txtIsFound = "0 is found!";
            break;
        }
    }
    cout << txtIsFound << " and x sum is: " << xPosSum << endl;
}

void task11(){
    int arr[14] = {2, -7, 1, 2, -3, 6, -1, 11, 8, 6, 5, -4, 6, 9};

    int minPos = arr[0];
    int maxPosOdd = arr[0];

    for (int i = 0; i < size(arr); i++)
    {
        if (arr[i] >= 0 &&  // positive
            arr[i] < minPos  // minimum
        )
        {
            minPos = arr[i];
        }

        if (arr[i] % 2 != 0 &&  // odd
            arr[i] >= 0 &&  // positive
            arr[i] > maxPosOdd  // maximum
        )
        {
            maxPosOdd = arr[i];
        }
    }

    cout << "minimum positive element in array: " << minPos << endl;
    cout << "maximum odd positive element in array: " << maxPosOdd << endl;
}

void task12(){
    int arr[8] = {2, -4, 9, -2, 3, 5, -1, 10};

    int maxPosOdd = arr[0];

    for (int i = 0; i < size(arr); i++)
    {
        if (arr[i] % 2 != 0 &&  // odd
            arr[i] >= 0 &&  // positive
            arr[i] > maxPosOdd  // maximum
        )
        {
            maxPosOdd = arr[i];
        }
    }

    cout << "maximum odd positive element in array: " << maxPosOdd << endl;
}

void task13(){
    int arr[7] = {2, -4, 9, -2, 3, 5, -1};

    int prodNeg = 1;
    int posOddCount = 0;

    for (int i = 0; i < size(arr); i++)
    {
        if (
            arr[i] < 0  // negative
        )
        {
            prodNeg *= arr[i];
        }
        
        if (arr[i] >= 0 &&  // positive
            arr[i] % 2 != 0  // odd
            )
        {
            posOddCount++;
        }
    }

    cout << "product of negative elements in array: " << prodNeg << endl;
    cout << "positive odd nums count in array: " << posOddCount << endl;
}

void task14(){
    int arr[10] = {-2, -4, 9, 2, 3, 5, -1, 7, 11, 6};

    int posMin = INT_MAX, posMax = arr[0];
    int posMinIndex = 0, posMaxIndex = 0;

    for (int i = 1; i < size(arr); i++)
    {
        if (
            arr[i] >= 0  // positive
        )
        {
            if (posMin > arr[i])
            {
                posMin = arr[i];
                posMinIndex = i;
            }
            if (posMax < arr[i])
            {
                posMax = arr[i];
                posMaxIndex = i;
            }
        }
    }

    cout << "min positive value in array: " << posMin << "\t- index: " << posMinIndex << endl;
    cout << "max positive value in array: " << posMax << "\t- index: " << posMaxIndex << endl;
}

void task15(){
    int arr[15] = {1, -7, 4, 3, -3, 6, -1, 11, 8, 7, 5, -4, 6, 9, 12};

    int posEvenMin = INT_MAX;

    for (int i = 0; i < size(arr); i++)
    {
        if (
            arr[i] >= 0 &&  // positive
            arr[i] % 2 == 0 &&  // even
            arr[i] < posEvenMin
        )
        {
            posEvenMin = arr[i];
        }
    }

    cout << "positive even minimum value in array is: " << posEvenMin << endl;
}

void task16(){
    int arr[9] = {3, -7, 2, 3, -3, 6, -1, 7, 2};

    int prodNeg = 1;
    int posInMinToMaxCount = 0;

    for (int i = 0; i < size(arr); i++)
    {
        if (
            arr[i] < 0  // negative
        )
        {
            prodNeg *= arr[i];
        }
    }

    // min index = 2, max index = 8
    int minIndex = 0, maxIndex = 0;

    // max and min value indexes in array
    for (int i = 0; i < size(arr); i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    // positive count between min and max value of array
    for (int i = 0; i < size(arr); i++)
    {
        if (arr[(minIndex-1) + i] >= 0)
        {
            if (i == maxIndex)
            {
                break;
            }
            posInMinToMaxCount++;
        }
    }

    cout << "product of negative elements in array: " << prodNeg << endl;
    cout << "positive nums count between minimum and maximum values in array: " << posInMinToMaxCount << endl;
}

void task17(){
    int arr[8] = {3, -7, 10, 3, -3, 6, -1, 7};

    int xPosProd = 1;
    string txtIsFound;

    for (int i = 0; i < size(arr); i++)
    {
        if (arr[i] != 10)
        {
            txtIsFound = "10 is NOT found!";
            continue;
        } else {
            for (int j = 0; j < size(arr); j++)
            {
                if (
                    arr[j] >= 0  // positive
                )
                {
                    xPosProd *= arr[j];
                }
            }

            txtIsFound = "10 is found!";
            break;
        }
    }
    cout << txtIsFound << " and x positive product is: " << xPosProd << endl;
}

void task18(){
    int arr[10] = {2, -7, 1, 2, -3, 6, -1, 8, 1, -6};

    int negProd = 1;
    int maxNum = arr[0];

    for (int i = 0; i < size(arr); i++)
    {
        if (arr[i] <= 0)
        {
            negProd *= arr[i];
        }
        if (maxNum < arr[i])
        {
            maxNum = arr[i];
        }
    }

    cout << "negative nums product in array: " << negProd << "\nmax value in array: " << maxNum << endl;
}

void task19(){
    int arr[15] = {4, -7, 4, 3, -3, 6, -1, 11, 2, 7, 5, -4, 6, 9, 12};

    int minPos = INT_MAX, minPosIndex = 0;

    for (int i = 0; i < size(arr); i++)
    {
        if (
            arr[i] >= 0  // positive
        )
        {
            if (minPos > arr[i])
            {
                minPos = arr[i];
                minPosIndex = i;
            }
        }
    }

    cout << "min positive value in array: " << minPos << "\nmin positive num index in array: " << minPosIndex << endl;
}

void task20(){
    int arr[10] = {1, -9, 4, 3, -3, 6, 8, -8, 7, -11};

    int negEvenMax = arr[0];

    for (int i = 0; i < size(arr); i++)
    {
        if (
            arr[i] < 0 &&  // negative
            arr[i] % 2 == 0 &&  // even
            arr[i] < negEvenMax  // maximum
        )
        {
            negEvenMax = arr[i];
        }
    }

    cout << "negative even max value in array is: " << negEvenMax << endl;
}

int main(){
    task20();
}