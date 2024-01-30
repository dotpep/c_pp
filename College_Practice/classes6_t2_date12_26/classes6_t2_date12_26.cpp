// classes6_t2_date12_26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void encrypt(string text) {
    string encrypted = "";

    for (int i = 0; i < text.length(); i++)
    {
        encrypted = text[i + 3];
    }
    cout << encrypted << endl;
}

void swap(int a, int b) {
    cout << "Before swaping: " << "a: " << a << " b: " << b << endl;
    
    int temp = a;
    a = b;
    b = temp;

    cout << "After swaping: " << "a: " << a << " b: " << b << endl;
}

int main()
{
    int a = 10;
    int b = 20;

    swap(a, b);
}