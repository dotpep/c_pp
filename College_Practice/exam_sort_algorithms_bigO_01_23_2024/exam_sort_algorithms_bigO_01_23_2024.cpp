#include <iostream>

using namespace std;

void filterStringsByFirstLetter(const string inputArray[], int size, char targetLetter) {
    cout << "Start with: '" << targetLetter << "':\n";

    for (int i = 0; i < size; ++i) {
        // string& means is reference not copy
        const string& str = inputArray[i];

        // !str.empty() this means str is not empty
        if (!str.empty() && str[0] == targetLetter) {
            cout << str << "\n";
        }
    }
}

void shellSort(int arr[], int n) {

    for (int h = n / 2; h > 0; h /= 2) {
        for (int i = h; i < n; ++i) {
            int temp = arr[i];
            int j;
            for (j = i; j >= h && arr[j - h] > temp; j -= h) {
                arr[j] = arr[j - h];
            }
            arr[j] = temp;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}

void sortMain() {
    int arr[] = { 12, 34, 54, 2, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sort:\n";
    printArray(arr, n);

    shellSort(arr, n);

    cout << "\nArray after sort:\n";
    printArray(arr, n );
}


int main()
{
    // Жолдар жиымын кабылдайтын және белгілі бір әріптен басталатын жолдарды ғана қамтитын жаңа кайтаратын функцияны жазыныз. 
    // Constant variable
    const int arraySize = 5;
    string inputArray[arraySize] = { "apple", "banana", "orange", "grape", "kiwi" };
    // character
    char targetLetter = 'a';

    //filterStringsByFirstLetter(inputArray, arraySize, targetLetter);
    sortMain();
}