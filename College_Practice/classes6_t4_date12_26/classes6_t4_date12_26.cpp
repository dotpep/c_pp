#include <iostream>
#include <algorithm> // std::find

using namespace std;

void print_Array(string arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

string get_UserInput(string arr[], int size) {
    do {
        string user_input;
        cin >> user_input;

        for (int i = 0; i < size; i++) {
            if (arr[i] == user_input) {
                return user_input;
            }
        }

        cout << "Try again: ";
    } while (true);
}

int find_IndexOfWordInArray(string arr[], int size, string target) {
    auto it = find(arr, arr + size, target);
    if (it != arr + size) {
        return distance(arr, it);
    }
    else {
        return -1; 
    }
}

int find_LengthOfWordInArray(string arr[], int size, string target) {
    int index = find_IndexOfWordInArray(arr, size, target);
    if (index != -1) {
        return arr[index].length();
    }
    else {
        return -1;
    }
}

void delete_DuplicateElementInArray(string arr[], int& size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--; 
                j--;  
            }
        }
    }
}

int main() {
    int n = 6;
    string array[6] = { "start", "first", "second", "third", "last", "start" };

    cout << "Original array: ";
    print_Array(array, n);

    delete_DuplicateElementInArray(array, n);

    cout << "After deleting duplicated words in array: ";
    print_Array(array, n);

    string user_input_word = get_UserInput(array, n);
    cout << "This is your input word that was found in the array: " << user_input_word << endl;

    int index_of_word = find_IndexOfWordInArray(array, n, user_input_word);
    int length_of_word = find_LengthOfWordInArray(array, n, user_input_word);

    if (index_of_word != -1) {
        cout << "Index of your input word in array: " << index_of_word << endl;
        cout << "Length of your input word in array: " << length_of_word << endl;
    }
    else {
        cout << "Word not found in the array." << endl;
    }

}
