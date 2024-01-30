// classes5_date12_19_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//
//using namespace std;
//
//void printArray(int array[], int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}
//
//void findSecondMaxValueInArray(int array[], int size) {
//    int maxSecondValue;
//    
//    for (int i = 0; i < size; ++i) {
//        cout << i << endl;
//    }
//
//    //return maxSecondValue;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    const int size = n;
//
//    //int array[5] = {1, 2, 3, 4, 5};
//
//    int array[5];
//
//    // input array size and elements or item in array
//    for (int i = 0; i < size; i++)
//    {
//        int element = array[i];
//        cout << "¬ведите массив: " << endl;
//        cin >> element;
//    }
//
//
//    printArray(array, size);
//
//    findSecondMaxValueInArray(array, size);
//
//
//}


// classes5_date12_19_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int findSecondMaxValueInArray(int array[], int size) {
    int max = array[0]; 
    int second_max = array[0]; 
    for (int i = 1; i < size; ++i) { 
        if (array[i] > max) { 
            second_max = max;
            max = array[i];
        }
        else if (array[i] > second_max && array[i] < max) { 
            second_max = array[i]; 
        }
    }
    return second_max; 
}

int main()
{
    //int n;
    //cout << "size array: " << endl; 
    //cin >> n; 

    int n = 5;
    int array[5];


    cout << "elements array: " << endl; 
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    printArray(array, n);

    int second_max = findSecondMaxValueInArray(array, n);

    cout << "max second: " << second_max << endl;

}
