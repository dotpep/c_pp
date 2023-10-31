#include <iostream>

using namespace std;
int main()
{
    int a, b, c, d, e;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    cout << "d: ";
    cin >> d;

    cout << "e: ";
    cin >> e;


    int temp;

    // Ascending
    if (a > b) // a = 5 b = 4 | temp = 5, a = 
    { 
        temp = a; a = b; b = temp; 
    }
    if (a > c) { temp = a; a = c; c = temp; }
    if (a > d) { temp = a; a = d; d = temp; }
    if (a > e) { temp = a; a = e; e = temp; }

    if (b > c) { temp = b; b = c; c = temp; }
    if (b > d) { temp = b; b = d; d = temp; }
    if (b > e) { temp = b; b = e; e = temp; }

    if (c > d) { temp = c; c = d; d = temp; }
    if (c > e) { temp = c; c = e; e = temp; }

    if (d > e) { temp = d; d = e; e = temp; }

    cout << "Ascending order: " << a << " " << b << " " << c << " " << d << " " << e << endl;

    // Descending
    if (a < b) { temp = a; a = b; b = temp; }
    if (a < c) { temp = a; a = c; c = temp; }
    if (a < d) { temp = a; a = d; d = temp; }
    if (a < e) { temp = a; a = e; e = temp; }

    if (b < c) { temp = b; b = c; c = temp; }
    if (b < d) { temp = b; b = d; d = temp; }
    if (b < e) { temp = b; b = e; e = temp; }

    if (c < d) { temp = c; c = d; d = temp; }
    if (c < e) { temp = c; c = e; e = temp; }

    if (d < e) { temp = d; d = e; e = temp; }

    cout << "Descending order: " << a << " " << b << " " << c << " " << d << " " << e << endl;

}
