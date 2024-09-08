#include <iostream>
#include <string>

using namespace std;

void task1() {
    string firstName, secondName;

    cout << "your first name here: ";
    cin >> firstName;
    cout << "your second name here: ";
    cin >> secondName;

    cout << "Hello! \n" << secondName << "\n" << firstName << endl;
}

void task2() {
    int x = 5;
    int y = 17;
    double z = 12.8;

    cout << "x=" << x << "\t" << "y=" << y << "\t" << "z=" << z << endl;
}

void task3() {
    double x = 0.5;

    double term1 = cos(x) + 2.8;
    double term2 = fabs(x + 2);
    double term3 = log(fabs(3 * x + 2));

    double funcX = term1 + term2 + term3; 

    cout << "f(x) = " << funcX << endl;
    // result: 7.43035
}

void task4() {
    int t, s;

    cout << "t: "; // t=3
    cin >> t;
    cout << "s: "; // s=4
    cin >> s;

    double term1 = (2 * t) + (2 * s) - sin(1.17);
    double term2 = 4.4 - t - sin(s - t);

    double funcX = term1 / term2;

    cout << "f(x) = " << funcX << endl;
    // result: 23.4173
}


void task5() {
    double a = 3.0, b = -14.0, c = -5.0;
    //double a = -2, b = -2, c = -10;


    double discriminant = (b * b) - (4 * a * c);

    bool isNonNegativeDiscriminant = discriminant >= 0 ? true : false;

    if (isNonNegativeDiscriminant)
    {
        double sqrtD = sqrt(discriminant);
        double x1 = (-b + sqrtD) / (2 * a);
        double x2 = (-b - sqrtD) / (2 * a);

        cout << "D = " << discriminant << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;

    } else
    {
        cout << "discriminant is negative and has complex roots" << endl;
    }
}

void task6() {
    int monkeys = 4, bananas = 10;

    int remainder = bananas % monkeys;

    cout << "leaves: " << remainder << " bananas" << endl;
    // result: 2
}

int multiply(int multiplicand, int multiplier) {
    int result = 0;

    for (int i = 0; i < multiplier; i++)
    {
        result += multiplicand;
    }
    return result;
}

void task7() {
    int a, b; // a=5, b=3

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;


    int result = multiply(a, b);
    cout << "a=" << a << " * " << "b=" << b << " = " << result << endl;
}


void task8() {
    int N = 73; // N=73

    bool isNTens = N <= 99 ? true : false;
    //bool isNTens = true;

    if (isNTens) {
        //int tens = (N / 10) % 10;
        
        int tens = (int)(N / 10);

        cout << "N=" << N << " penultimate N tens is: " << tens << endl;
        // result: 7

    } else {
        cout << "N=" << N << " tens is zero "<< endl;
    }
}

void task9() {
    int N;

    while (true)
    {
        cout << "enter Three Digit Number value in range of 100 to 999: ";
        cin >> N;

        bool isThreeDigitNum = N <= 999 and N >= 100 ? true : false;

        if (isThreeDigitNum)
        {
            int firstDigit = (N / 100) % 10;
            int secondDigit = (N / 10) % 10;
            int thirdDigit = (N / 1) % 10;

            int result = firstDigit + secondDigit + thirdDigit;

            cout << "sum of each digit in num: " << result << endl;
            break;
        }
        else {
            cout << "you need to write 3 digit number in range of 100 to 999" << endl;
            continue;
        }
    }
}

void task10() {
    int N, nextNaturalN;

    cout << "enter number (I'll give you next natural number): ";
    cin >> N;

    if (N % 2 == 0) // define it is Natural if yes then true
    {
        nextNaturalN = N + 2;
    } else {
        nextNaturalN = N + 1;
    }

    cout << "N=" << N << " next natural number is: " << nextNaturalN << endl;
}

void task11() {
    //int dayHours = 24;
    //int hourMinutes, minuteSeconds = 60;

    //// 3600 = 60 * 60
    //int oneHourSeconds = hourMinutes * minuteSeconds;
    //// 86400 = 24 * 3600
    //int oneDaySeconds = dayHours * oneHourSeconds;


    //int N = 3602;
    

    int N;
    cout << "--- Second to Clock Timer Formatter (seconds to h:mm:ss)---" << endl;

    cout << "enter amount of seconds \n1 day is 86400 seconds and 1 hour is 3600 seconds \n(I'll give you formatted time clock): ";
    cin >> N;


    int hour, minute, second;

    // calculate hours, minutes and seconds
    hour = N / 3600;
    minute = (N % 3600) / 60;
    second = N % 60;

    // calculate remainder of days hour
    hour %= 24;

    // formate to 2 digit minutes and seconds
    int h = hour;
    string mm, ss;

    if (minute <= 9)
    {
        mm = "0" + to_string(minute);
    } else {
        mm = to_string(minute);
    }

    if (second <= 9) {
        ss = "0" + to_string(second);
    } else {
        ss = to_string(second);
    }


    cout << "h:mm:ss" << " " << h << ":" << mm << ":" << ss << endl;
}

void task12() {
    cout << "--- Calculate how much time is spent between two times (hh:mm:ss)---" << endl;

    int hour1, minute1, second1;
    cout << "hour 1: ";
    cin >>hour1;
    cout << "minute 1: ";
    cin >> minute1;
    cout << "second 1: ";
    cin >> second1;

    cout << "------" << endl;
    int hour2, minute2, second2;
    cout << "hour 2: ";
    cin >> hour2;
    cout << "minute 2: ";
    cin >> minute2;
    cout << "second 2: ";
    cin >> second2;


    //int hour1 = 1, minute1 = 2, second1 = 30;
    //int hour2 = 1, minute2 = 3, second2 = 20;


    int h, m, s;

    h = abs(hour1 - hour2);
    m = abs(minute1 - minute2);
    s = abs(second1 - second2);

    // formula: // (ah = a_hour or first_hour and, bh = second_hour)
    // (((ah - bh) * 60) * 60) - ((am - bm) * 60) - ((as - bs))
    // ((h * 60) * 60) - (m * 60) - (s)

    cout << "------" << endl;
    cout << "first input | hh:mm:ss " << hour1 << ":" << minute1 << ":" << second1 << endl;
    cout << "second input | hh:mm:ss " << hour2 << ":" << minute2 << ":" << second2 << endl;
    cout << "hour=" << h << " minute=" << m << " second=" << s << endl;


    int term1 = ((h * 60) * 60);

    int case1 = (m * 60) - s;
    int case2 = term1 - case1;


    int result;

    if (h != 0 and m != 0 and s != 0)
    {
        result = case2;
    } 
    else if (m != 0 and s != 0) {
        result = case1;
    }
    else if (s != 0) {
        result = s;
    } 
    else {
        result = 0;
    }

    cout << "------" << endl;
    cout << "in second: " << result << endl;
}

void task13() {
    //int moscowRoadLenKM = 109;
    //int vasyaStartKM = 0;

    //int vasyaSpeedKMPerHour = 60;
    //int V = vasyaSpeedKMPerHour;

    //int stopTimeMarkerInHour = 2;
    //int T = stopTimeMarkerInHour;

    //if (V > 0) { // vasya start moving

    //}
    //if (V < 0) { // vasya moving in negative direction

    //}


    const int moscowRingRoadLenKM = 109;
    int V = 55, T = 2; //V=vasya_speed, T=roaded_time_in_hour

    // (V=60 * T=20) % ring_road=109 = stop_mark = 11
    int stopMark = (V * T) % moscowRingRoadLenKM;

    cout << stopMark << endl;


    // V=60, T=2, stopMark=11
    
    // round(109 / 2) = 54
    // (54 * 2) % 109 = 108
    // (55 * 2) % 109 = 1
}

void task14() {
    //int fourDigiutNum = 2002; // result: 1
    //int N = fourDigiutNum;

    int N;
    cout << "enter four digit number: ";
    cin >> N;

    if (N < 1000 or N >= 10000)
    {
        cout << 37 << endl;  // not symmetric
    }
    else {

        int firstDigit, secondDigit, thirdDigit, lastDigit;

        lastDigit = N % 10;  // 1
        thirdDigit = (N % 100) / 10;  // 2
        secondDigit = (N % 1000) / 100;  // 3
        firstDigit = (N % 10000) / 1000;  // 4

        // first == last and second == third
        if (firstDigit == lastDigit and secondDigit == thirdDigit)
        {
            cout << 1 << endl;  // symmetric
        }
        else
        {
            cout << 37 << endl;  // not symmetric
        }

    }
}

void task15() {
    //int verticalPoleOfHeight = 10;
    //int climbingAMetersDuringDay = 3;
    //int descendingBMetersDuringNight = 2;

    //int H = verticalPoleOfHeight, A = climbingAMetersDuringDay, B = descendingBMetersDuringNight;
    ////result: 8


    // special conditions:
    // H > B
    // nums not exceed 100
    // A > B

    int H, A, B;
    cout << "height of pole H: ";
    cin >> H;
    cout << "meter climb, up, during day A: ";
    cin >> A;
    cout << "meter descend, down, during night B: ";
    cin >> B;

    int dayCount = 0;
    int currentHeight = 0;

    while (currentHeight < H)
    {
        dayCount++;

        currentHeight += A;  // up, day
        
        if (currentHeight >= H) {  // snail reach top
            break;
        }
        
        currentHeight -= B;  // down, night

    }

    cout << "snail reach top on day: " << dayCount << endl;
}



int main()
{
    task15();
}
