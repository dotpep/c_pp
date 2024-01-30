#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int binarySearch(int target) {
    int low = 1;  // min
    int high = 10; // max

    int count = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (mid == target) {
            return mid;  // find
        }
        else if (mid > target) {
            high = mid - 1;  // target is lower
        }
        else {
            low = mid + 1;   // target is greater
        }

        count++;
    }

    cout << "counter of loop: " << count << endl;

    return -1;  // Цель не найдена
}

int binaryMain() {
    srand(static_cast<unsigned int>(time(0)));
    int unknown_number = 1 + rand() % 10;

    int result = binarySearch(unknown_number);

    if (result != -1) {
        cout << "Target found: " << result << endl;
    }
    else {
        cout << "Target not found." << endl;
    }

    return 0;
}


void calculateStatistics()
{
    // Task 1

    int count = 0;
    int sum = 0;
    int number;

    cout << "Enter numbers (enter 0 to finish):" << std::endl;

    while (true)
    {
        cin >> number;

        if (number == 0)
            break;

        count++;
        sum += number;
    }

    if (count > 0)
    {
        double average = static_cast<double>(sum) / count;

        cout << "Number of digits: " << count << endl;
        cout << "Sum of digits: " << sum << endl;
        cout << "Average: " << average << endl;
    }
    else
    {
        cout << "No digit." << endl;
    }
}

void drawTriangle(int height)
{
    // Task 2
    
    int count = 1;
    while (count <= height)
    {
        for (int i = 1; i <= height - count; ++i)
            cout << " ";

        for (int j = 1; j <= 2 * count - 1; ++j)
            cout << "*";

        cout << endl;
        count++;
    }
}

int isFibonacci(int num)
{
    // Task 3

    int a = 0, b = 1, c = 1;
    int count = 1;

    while (c < num)
    {
        c = a + b;
        a = b;
        b = c;
        count++;
    }

    if (c == num)
        return count;

    return -1;
}

int myMain() {
    // Task 1
    calculateStatistics();

    // Task 2
    int triangleHeight;
    cout << "Enter height of triangle: ";
    cin >> triangleHeight;
    drawTriangle(triangleHeight);

    // Task 3
    int num;
    cout << "Enter number to check Fibonacci: ";
    cin >> num;
    int result = isFibonacci(num);
    if (result != -1)
        cout << num << " : " << result << " is Fibonacci number." << endl;
    else
        cout << num << "not Fibonacci number" << endl;

    return 0;
}


void testSpace() {

    int count = 1;
    int height = 10;

    while (count <= height)
    {
        for (int i = 1; i <= 1 * count; i++)
        {
            cout << "*";
        }

        cout << endl;
        count++;
    }
}


int main() 
{
    myMain();
}