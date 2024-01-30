#include <iostream>

using namespace std;

int minElement(int arr[], int size) {
    int minimum = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    return minimum;
}

int maxElement(int arr[], int size) {
    int largest = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 5;
    int array[5] = { 1, 2, 4, 5, 3 };

    printArray(array, n);

    int min_value = minElement(array, n);
    int max_value = maxElement(array, n);

    cout << "Minimum value in array is: " << min_value << endl;
    cout << "Maximum value in array is: " << max_value << endl;
}