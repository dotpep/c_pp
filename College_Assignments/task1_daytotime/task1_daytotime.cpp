#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";

    setlocale(LC_ALL, "Rus");
    cout << "������\n";

    //int n;
    //cout << "n: ";
    //cin >> n;

    //int secund_to_minut = n / 60;
    //int second_to_hour = n / 3600;
    //int seconds_since_last_minute = n % 60;
    //int seconds_since_last_hour = n % 3600;
    //int seconds_since_last_minut_hour = n % 3600 / 60;


    //int a = 10;
    //int test1 = a % 7;


    //cout << "Result: " << test1 << endl;


    
    int day_of_year;
    cout << "Define which day of week name in year! K(1, 365): ";
    cin >> day_of_year;
    
    string week[] = { "�����������", "�����������", "�������", "�����", "�������", "�������", "�������" };


    if (day_of_year >= 1 && day_of_year <= 365) {
        int day_of_week_number = day_of_year % 7;
        cout << "Weeks of day: " << week[day_of_week_number] << endl;
    }
    else {
        cout << "Number Error! K is not (1-365)" << endl;
    }





}

    /*
 1. � ������ ����� ������ N ������ (N � ����� �����).  
 ������� ���������� ������ �����, ��������� � ������ ���.

 2. � ������ ����� ������ N ������ (N � ����� �����).  
 ������� ���������� ������ �����, ��������� � ������ ���.

 3. � ������ ����� ������ N ������ (N � ����� �����).  
 �������, ������� ������ ������ � ������ ��������� ������.

 4. � ������ ����� ������ N ������ (N � ����� �����).  
 � ������ ���������� ���� ����� ������� ������ ������ � �������

 5. � ������ ����� ������ N ������ (N � ����� �����).  
 � ������ ���������� ���� ������� ���������� ����� �����, ��������� � �������  
 
 
 6. ��� ������ ������������� ��������� �������: 0 �����������, 1 �����������, 2 �������, 6 - �������.  
 ���� ����� ����� K �� 1 �� 365.  
 ���� ��������, ��� 1 ������ ����� ���� � �����������, 
 ���������� ���������� ���� ������ ��� � ��� ����.
    */
