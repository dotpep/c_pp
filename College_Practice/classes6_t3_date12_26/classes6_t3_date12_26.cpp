#include <iostream>
#include <algorithm> // str::sort
using namespace std;

void sort_Ascending(int arr[], int size) {
    sort(arr, arr + size);
}

void sort_Descending(int arr[], int size) {
    sort(arr, arr + size, greater<int>());
}

void reverse_Array(int arr[], int size) {
    int first = 0;
    int last = size - 1;

    while (first < last) {
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;

        first++;
        last--;
    }
}

void print_Array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 7;
    int array[7] = { 1, 2, 3, 4, 5, 6, 7 };

    cout << "Original array: ";
    print_Array(array, n);

    //sort_Ascending(array, n);
    //cout << "Sorted in ascending order: ";
    //print_Array(array, n);

    //sort_Descending(array, n);
    //cout << "Sorted in descending order: ";
    //print_Array(array, n);

    reverse_Array(array, n);
    cout << "Reversed array: ";
    print_Array(array, n);
}
