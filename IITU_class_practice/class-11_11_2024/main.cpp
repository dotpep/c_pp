#include <iostream>

#include <cmath>
#include <cstdlib>

#include <string>

using namespace std;

#define M_PI 3.14159265358979323846

double function1(double x) {
    return fabs(x - 1.5) + pow(x, 4.0 / 5.0) + pow(exp(3 * x) + 4, 1.0 / 3.0);
}

double function2(double x) {
    return tan(5.0 / 3.0 * x) + log(fabs(2 * x + 5)) + 1.8;
}

double function3(double x) {
    return pow(x, 5) + log(sqrt(M_PI + fabs(5 - x)));
}

void lab8_tasks() {
    double x;

    cout << "value of x: ";
    cin >> x;

    cout << "f(x) = " << function1(x) << endl;
    cout << "f(x) = " << function2(x) << endl;
    cout << "f(x) = " << function3(x) << endl;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

void task1(){
    int num = 5;
    cout << "factorial " << num << ": "<< factorial(num);
}

void recursion_fibonacci(int num, int prev1, int prev2) {
    if (num < 3)
    {
        return;
    }
    int temp = prev1 + prev2;
    prev2 = prev1;
    prev1 = temp;

    cout << " " << temp << endl;
    recursion_fibonacci(num - 1, prev1, prev2);
}

void task2(){
    int num = 9;

    cout << " 0 " << endl << " 1 " << endl;
    recursion_fibonacci(num, 1, 0);
}

void permute(string str, int l, int r) {
    if (l == r) {
        cout << str << endl;
    } else {
        for (int i = l; i <= r; i++) {
            swap(str[l], str[i]);
            permute(str, l + 1, r);
            swap(str[l], str[i]);
        }
    }
}

void task3(){
    string str = "abc";
    permute(str, 0, str.length() - 1);
}


void tower_of_hanoi(int disks, char start, char middle, char end) {
    if (disks == 1) {
        cout << "move disk 1 from rod " << start << " to rod " << end << endl;
        return;
    }
    tower_of_hanoi(disks - 1, start, end, middle);
    cout << "move disk " << disks << " from rod " << start << " to rod " << end << endl;
    tower_of_hanoi(disks - 1, middle, start, end);
}

void task4() {
    int disks = 3;
    tower_of_hanoi(disks, 'A', 'B', 'C');
}

int main() {
    task4();
}