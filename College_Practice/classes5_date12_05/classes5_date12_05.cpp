#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
void findNumber() {
    int x;
    cout << "find number: ";
    cin >> x;

    
    int n = 5;
    int array[5];


    // random
    for (int i = 0; i < n; ++i) {
        array[i] = rand() % 10 + 1;
    }

    // print random array
    cout << "Random array: ";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;


    // i want to find x
    cout << "Number that i want to find: " << x << endl;

    bool found = false;

    // Search
    for (int i = 0; i < n; ++i) {
        if (array[i] == x) {
            found = true;
            break;
        }
    }

    // Exception my array
    if (found) {
        cout << "Find: " << x << endl;
    }
    else {
        cout << "Not find: " << x << endl;
    }
}

void findPolindrome() {
    // task 1
    string text = "recacer";

    //cout << text[0];

    string array[7] = { "r", "e", "c", "a", "c", "e", "r" };

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == text[i])
        {
            cout << text << " is Polindrom";
            break;
        }
        else
        {
            cout << text << " is Not Polindrom";
            break;
        }
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



void sortEvenOdd(int arr[], int size) {
    // Task 1

    // even numbers
    cout << "even: " << endl;
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] % 2 == 0 && arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                // arr[j] = arr[j + 1];
            }
        }
    }

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // odd numbers
    cout << "odd: " << endl;
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] % 2 != 0 && arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                //arr[j] = arr[j + 1];
            }
        }
    }

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void task1Main() {
    // Task 1

    const int n = 10;
    int numbers[n];

    // random
    for (int i = 0; i < n; ++i) {
        numbers[i] = rand() % 100 + 1;
    }

    // random array
    cout << "Print Generated Array: ";
    printArray(numbers, n);

    // even and odd
    sortEvenOdd(numbers, n);

    // sorted array
    //cout << "Sorted Array: ";
    //printArray(numbers, n);
}


void printStrings(string strings[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << strings[i] << " ";
    }
    cout << endl;
}


void SortStringArray(string arr[], int size) {
    // Task 2
    const int n = 5;
    string sortedArray[n];

    const int englishAlphabetLetter = 26;
    const char englishAlphabetList[5] = { 'a', 'b', 'g', 'k', 'o' };

    for (int i = 0; i < size; i++)
    {
        if (arr[i][0] == englishAlphabetList[i]) {
            cout << arr[1] << endl;
        }
        else if (arr[i][0] == englishAlphabetList[1]) {
            cout << arr[0] << endl;
        }
        else if (arr[i][0] == englishAlphabetList[2]) {
            cout << arr[3] << endl;
        }
        else if (arr[i][0] == englishAlphabetList[3]) {
            cout << arr[5] << endl;
        }
        else if (arr[i][0] == englishAlphabetList[4]) {
            cout << arr[4] << endl;
        }
    }
}


void task2Main() {
    // Task2
    const int n = 5;
    string arrayString[n] = {"banana", "apple", "orange", "grape", "kiwi"};


    // sort string array
    SortStringArray(arrayString, n);

    // print string array
    printStrings(arrayString, n);
}


int main() {
    task2Main();
}
