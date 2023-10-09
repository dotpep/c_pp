#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";

    setlocale(LC_ALL, "Rus");
    cout << "Привет\n";

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
    
    string week[] = { "Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота" };


    if (day_of_year >= 1 && day_of_year <= 365) {
        int day_of_week_number = day_of_year % 7;
        cout << "Weeks of day: " << week[day_of_week_number] << endl;
    }
    else {
        cout << "Number Error! K is not (1-365)" << endl;
    }





}

    /*
 1. С начала суток прошло N секунд (N — целое число).  
 Найдите количество полных минут, прошедших с начала дня.

 2. С начала суток прошло N секунд (N — целое число).  
 Найдите количество полных часов, прошедших с начала дня.

 3. С начала суток прошло N секунд (N — целое число).  
 Найдите, сколько секунд прошло с начала последней минуты.

 4. С начала суток прошло N секунд (N — целое число).  
 С начала последнего часа найди сколько секунд прошло с момента

 5. С начала суток прошло N секунд (N — целое число).  
 С начала последнего часа найдите количество целых минут, прошедших с момента  
 
 
 6. Дни недели пронумерованы следующим образом: 0 воскресенье, 1 понедельник, 2 Вторник, 6 - Суббота.  
 Дано целое число K от 1 до 365.  
 Если известно, что 1 января этого года — понедельник, 
 определите количество дней недели для К дня года.
    */
