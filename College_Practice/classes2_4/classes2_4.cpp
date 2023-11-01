#include <iostream>

using namespace std;
int main()
{
// task 1
	//int day;
	//cout << "day: ";
	//cin >> day;

	//switch (day)
	//{
	//case 1:
	//	cout << "Mon";
	//	break;
	//case 2:
	//	cout << "Tue";
	//	break;
	//case 3:
	//	cout << "Wed";
	//	break;
	//case 4:
	//	cout << "Thu";
	//	break;
	//case 5:
	//	cout << "Fri";
	//	break;
	//case 6:
	//	cout << "Sat";
	//	break;
	//case 7:
	//	cout << "Sun";
	//	break;

	//default:
	//	cout << "Errors of week day";
	//	break;
	//}

	

// task 2
	//double a;
	//cout << "a: ";
	//cin >> a;

	//char op;
	//cout << "operators: +, -, *, /: ";
	//cin >> op;

	//double b;
	//cout << "b: ";
	//cin >> b;

	//double result;

	//switch (op)
	//{
	//case '+':
	//	result = a + b;
	//	//cout << a << " + " << b << " = " << a + b;
	//	break;
	//case '-':
	//	result = a - b;
	//	//cout << a << " - " << b << " = " << a - b;
	//	break;
	//case '*':
	//	result = a * b;
	//	/*cout << a << " * " << b << " = " << a * b;*/
	//	break;
	//case '/':
	//	result = a / b;
	//	//cout << a << " / " << b << " = " << a / b;
	//	break;

	//default:
	//	cout << "Operators Input Errors";
	//	break;
	//}

	//cout << a << " " << op << " " << b << " = " << result;


// task 3

	char a;
	cout << "a: ";
	cin >> a;

	//typeid(variable).name();

	switch (a)
	{
	case '0' ... '9':
		cout << "int: " << a;
		break;
	case 'a' ... 'z':
		cout << "string: " << a;
		break;

	default:
		break;
	}

	// doesnt work in visual studio ide but work in online c++ compiler (c++ shells)

}
