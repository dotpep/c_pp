#include <iostream>

using namespace std;
int main()
{
    double n1, n2, result;
    char op;

    cout << "First number: ";
    cin >> n1;
    cout << "Choose Operator (+, -, *, /): ";
    cin >> op;
    cout << "Second number: ";
    cin >> n2;

    switch (op) {
    case '+':
        result = n1 + n2;
        break;

    case '-':
        result = n1 - n2;
        break;

    case '*':
        result = n1 * n2;
        break;

    case '/':
        if (n2 != 0) {
            result = n1 / n2;
        }
        else {
            cout << "Error / 0" << endl;
            return 1;
        }
        break;

    default:
        cout << "Unexpected error" << endl;
        return 1;

    }

    cout << "Result: " << n1 << " " << op << " " << n2 << " = " << result << endl;
}