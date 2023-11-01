// classes_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int a;
    int d;

    cout << "¬ведите n, a, d: ";
    cin >> n >> a >> d;
    vector<int> progression(n);

    for (int i = 0; i < n; i++) 
    {
        progression[i] = a + i * d;
    }

    cout << "Progression";

    for (int i = 0; i < n; i++) 
    {
        cout << progression[i] << " ";
    }

}
