#include <iostream>

using namespace std;

void task1() {
	int N;

	cout << "enter num: ";
	cin >> N;

	if (N >= 0)
	{
		cout << "you entered num is positive: " << N << endl;
	}
	else
	{
		cout << "you entered num is negative: " << N << endl;
	}
}

void task2() {

	int numLegs, numEyes;

	cout << "enter num legs: ";
	cin >> numLegs;

	cout << "enter num eyes: ";
	cin >> numEyes;

	const int spiderLegs = 8;
	const int spiderEyes = 8;

	const int catLegs = 4;
	const int catEyes = 2;

	const int butterflyLegs = 0;
	const int butterflyEyes = 2;

	const int scallopLegs = 0;
	const int scallopEyes = 0;


	//int numLegs = 8, numEyes = 8;

	if (numLegs == spiderLegs and numEyes >= spiderEyes)
	{
		cout << "is spider" << endl;
	}
	else if (numLegs == catLegs and numEyes == catEyes) {
		cout << "is cat" << endl;
	}
	else if (numLegs == butterflyLegs and numEyes == butterflyEyes)
	{
		cout << "is butterfly" << endl;
	}
	else if (numLegs == scallopLegs and numEyes == scallopEyes) {
		cout << "is scallop" << endl;
	}
	else {
		cout << "not identified" << endl;
	}
}

void task3() {
	int numOfDay;

	while (true)
	{
		cout << "enter num of day (I'll convert it to weeks text like 1 is sunday (range 1-7)): ";
		cin >> numOfDay;

		if (numOfDay > 0 and numOfDay <= 7) {

			switch (numOfDay)
			{
			case 1:
				cout << "sunday" << endl;
				break;
			case 2:
				cout << "monday" << endl;
				break;
			case 3:
				cout << "tuesday" << endl;
				break;
			case 4:
				cout << "wensday" << endl;
				break;
			case 5:
				cout << "thursday" << endl;
				break;
			case 6:
				cout << "friday" << endl;
				break;
			case 7:
				cout << "saturday" << endl;
				break;
			default:
				continue;
			}
			break;
		}
		else
		{
			cout << "you need to enter valid num of week range!" << endl;
			continue;
		}

	}
}

void classTask1() {
	double x, result;


	cout << "enter x: ";
	cin >> x;

	if (-2 < x < 5)
	{
		result = 5 * pow(x, 2) + 6;  // 5x^2 + 6
	}
	else if (x >= 5)
	{
		result = pow(x, 3) + 7;  // x^3 + 7
	}

	cout << "f(x)=" << result << endl;
}

void classTask2() {
	double x, result;


	cout << "enter x: ";
	cin >> x;

	if (x >= 0)
	{
		result = sqrt(pow(x, 3) + 5);  // square root
	}
	else if (-3 < x < 0)
	{
		result = 3 * pow(x, 4) + 9;
	}

	cout << "f(x)=" << result << endl;
}

void classTask3() {
	double x, result;


	cout << "enter x: ";
	cin >> x;

	if (x < 1.5)
	{
		result = x * tan(x);  // x tgx
	}
	else if (1.5 <= x < 2.5)
	{
		result = pow(x, 3) + sin(x);
	}
	else if (x >= 2.5)
	{
		result = 3 * pow(x, 3) + 5;
	}

	cout << "f(x)=" << result << endl;
}

int main()
{
	classTask1();
}
