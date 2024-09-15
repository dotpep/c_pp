#include <iostream>

using namespace std;

void task1(){
    int a = 1, b = 2;

    bool isAGreaterThanB = a > b ? true : false;
    bool isALessThanB = a < b ? true : false;
    bool isAEqualToB = a == b ? true : false;

    int out;
    if (isAGreaterThanB) {
        out = 1;  // 1 - a greater than b
    } 
    else if (isALessThanB) {
        out = 2;  // 2 - b greater than a, and a less than b
    } 
    else if (isAEqualToB) {
        out = 0;  // 0 - a equal to b
    }

    cout << out << endl;
}

void task2(){
    int a, b, c;

    cout << "input 3 number: " << endl;
    cin >> a >> b >> c;

    cout << "your input: " << "a=" << a << " b=" << b << " c=" << c << endl;


    int largest = a;

    if (largest < b) {
        largest = b;
    }
    if (largest < c) {
        largest = c;
    }

    //largest = max({a, b, c});

    cout << "largest number is: " << largest << endl;
}

// Leap year is divisible by 4 but not 100, 
// except if it's also divisible by 400.
// If year is leap year then is True else False.
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void task3() {
    int year;

    const string LEAP = "leap", NOTLEAP = "not leap" ;
    string outLeap;

    cout << "input year number here: ";
    cin >> year;

    // Solution 1
    //if (year % 4 == 0) {
    //    outLeap = LEAP;
    //} else {
    //    outLeap = NOTLEAP;
    //}

    //if (year % 100 == 0) {
    //    outLeap = NOTLEAP;
    //}
    //if (year % 400 == 0) {
    //    outLeap = LEAP;
    //}

    // Solution 2
    if (isLeapYear(year)) {
        outLeap = LEAP;
    } else {
        outLeap = NOTLEAP;
    }
    
    cout << year << " is a " << outLeap << " year." << endl;
}

void task4() {
    int a, b, c;

    cout << "input 3 natural number: " << endl;
    cin >> a >> b >> c;

    // convert to natural number using absolute value
    a = abs(a), b = abs(b), c = abs(c);

    cout << "your input: " << "a=" << a << " b=" << b << " c=" << c << endl;

    string out;

    // triangle is valid if sum of its two sides is greater than the third side. 
    // means if a, b, c are three sides of a triangle. 
    // then the triangle is valid if all three conditions are satisfied a + b > c and a + c > b and b + c > a
    if ((a + b) > c && 
        (a + c) > b && 
        (b + c) > a)
    {
        out = "YES";
    } else
    {
        out = "NO";
    }
    
    cout << "triangle with these sides A, B, C is exists: " << out << endl;
}

void task5() {
    int a, b, c, out;

    cout << "input 3 integer number: " << endl;
    cin >> a >> b >> c;

    cout << "your input: " << "a=" << a << " b=" << b << " c=" << c << endl;

    if (a == b && b == c) {
        out = 3;
    } else if (a == b || b == c) {
        out = 2;
    } else {
        out = 0;
    }
    
    cout << "how many of A, B, C are matched: " << out << " times." << endl;
}

enum AgePrice {
    ChildrenPrice = 5,
    TeenagerPrice = 8,
    AdultPrice = 12,
    SeniorPrice = 7,
};

struct AgeRange {
    int low;
    int high;
    AgePrice price;
};

int getPriceForAge(int age){
    AgeRange ageRangesArray[] = {
        {0, 12, ChildrenPrice},
        {13, 19, TeenagerPrice},
        {20, 64, AdultPrice},
        {65, 200, SeniorPrice},
    };

    // e.g. range-based for loop (similar to foreach) to iterate array elements
    //int arrNumbers[] = {1, 2, 3, 4, 5};
    //for (int num : arrNumbers) {
    //    cout << num << endl;
    //}

    for (const auto& ageRange : ageRangesArray){
        if (ageRange.low <= age && age <= ageRange.high) {
            return ageRange.price;
        }
    }

    return -1;  // invalid age
}

void task6() {
    int age, outCost;

    cout << "input your age: ";
    cin >> age;

    age = abs(age);  // absolute negative age

    cout << "your age is " << age << endl;

    // Solution 1
    // lower <= value && value <= upper
    //if (0 <= age && age <= 12) {
    //    outCost = ChildrenPrice;
    //} else if (13 <= age && age <= 19) {
    //    outCost = TeenagerPrice;
    //} else if (20 <= age && age <= 64) {
    //    outCost = AdultPrice;
    //} else {
    //    outCost = SeniorPrice;
    //}
    //cout << "price for your age is " << outCost << "$" << endl;

    // Solution 2
    outCost = getPriceForAge(age);
    if (outCost != -1) {
        cout << "price for your age is " << outCost << "$" << endl;
    } else {
        cout << "invalid age provided" << endl;
    }
}

void task7() {
    int month, year, days;

    cout << "input month: ";
    cin >> month;
    cout << "input year: ";
    cin >> year;

    cout << "your input: month " << month << " of " << year << " year" << endl;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2: // February
            if (isLeapYear(year)) {
                days = 29;  // leap year
            } else {
                days = 28;  // not leap year
            }
            break;
        default:
            cout << "invalid month" << endl;
            break;
    }

    cout << "number of days: " << days << endl;
}

void task8() {
    int amountUSD;
    cout << "input your amount of USD money: ";
    cin >> amountUSD;

    int convertNum;
    cout << "type number to convert USD to this currency listed below: \n1. EUR \n2. GBP \n3. JPY \nyour number here: ";
    cin >> convertNum;

    //enum USDConversionRate : double {
    //    USDToEUR = 0.93,
    //};

    const double USDToEUR = 0.93;
    const double USDToGBP = 0.78;
    const double USDToJPY = 134.47;

    double outConverted;
    string outCurrency;
    if (convertNum == 1) {
        outConverted = amountUSD * USDToEUR;
        outCurrency = "EUR";
    } else if (convertNum == 2) {
        outConverted = amountUSD * USDToGBP;
        outCurrency = "GBP";
    } else if (convertNum == 3) {
        outConverted = amountUSD * USDToJPY;
        outCurrency = "JPY";
    } else {
        outConverted = amountUSD;
        outCurrency = "(not converted) USD";
    }

    cout << "Amount in " << outCurrency << ": " << outConverted << endl ;
}

struct PercentGradeToLetter {
    int startPct;
    int endPct;
    string letterGrade;
};

string convertPercentGradeToLetter(int grade){
    const PercentGradeToLetter gradeConverterMapArray[] = {
        {90, 100, "A"},
        {80, 89, "B"},
        {70, 79, "C"},
        {60, 69, "D"},
        {0, 59, "F"},
    };

    for (const auto& gradeVal : gradeConverterMapArray){
        if (gradeVal.startPct <= grade && grade <= gradeVal.endPct) {
            return gradeVal.letterGrade;
        }
    }

    return "Not Converted ERROR!";
}

void task9() {
    int pctGrade;
    string outLetterGrade;

    while (true)
    {
        cout << "input your grade number in percentage between 0-100: ";
        cin >> pctGrade;

        // between statement: lower <= value && value <= upper
        if (0 <= pctGrade && pctGrade <= 100)
        {
            // Solution 1
            //if (90 <= pctGrade && pctGrade <= 100) {
            //    outLetterGrade = "A";
            //} else if (80 <= pctGrade && pctGrade <= 89) {
            //    outLetterGrade = "B";
            //} else if (70 <= pctGrade && pctGrade <= 79) {
            //    outLetterGrade = "C";
            //} else if (60 <= pctGrade && pctGrade <= 69) {
            //    outLetterGrade = "D";
            //} else if (0 <= pctGrade && pctGrade <= 59) {
            //    outLetterGrade = "F";
            //}

            // Solution 2
            //switch (pctGrade / 10) {
            //    case 10:  // this case will handle grades from 100 to 99
            //    case 9:  // 90 ... 100
            //        outLetterGrade = "A";
            //        break;
            //    case 8:  // 80 ... 89
            //        outLetterGrade = "B";
            //        break;
            //    case 7:  // 70 ... 79
            //        outLetterGrade = "C";
            //        break;
            //    case 6:  // 60 ... 69
            //        outLetterGrade = "D";
            //        break;
            //    default:  // 0 ... 59
            //        outLetterGrade = "F";
            //        break;
            //}

            // Solution 3
            outLetterGrade = convertPercentGradeToLetter(pctGrade);

            cout << "corresponding letter grade: Grade:" << outLetterGrade << endl;
            break;
        } else
        {
            cout << "provide correct percentage grade between 0-100!" << endl;
            continue;
        }
    }
}

void task10() {
    int weekDay;
    string outWeekDayName;

    while (true)
    {
        cout << "input your number of week between 1 and 7: ";
        cin >> weekDay;

        if (1 <= weekDay && weekDay <= 7)
        {
            switch (weekDay) {
            case 7:
                outWeekDayName = "Sunday";
                break;
            case 1:
                outWeekDayName = "Monday";
                break;
            case 2:
                outWeekDayName = "Tuesday";
                break;
            case 3:
                outWeekDayName = "Wednesday";
                break;
            case 4:
                outWeekDayName = "Thursday";
                break;
            case 5:
                outWeekDayName = "Friday";
                break;
            case 6:
                outWeekDayName = "Saturday";
                break;
            }

            cout << "corresponding day of the week: " << outWeekDayName << endl;
            break;
        } else {
            cout << "input valid range of week between 1 and 7!" << endl;
            continue;
        }
    }
    
}

void task11() {
    char arithOperator;
    double num1, num2, sum;

    while (true)
    {
        cout << "arithmetic operator (+, -, *, /): ";
        cin >> arithOperator;

        if (arithOperator == '+' || 
            arithOperator == '-' || 
            arithOperator == '*' || 
            arithOperator == '/')
        {
            cout << "first number: ";
            cin >> num1;

            cout << "second number: ";
            cin >> num2;

            switch (arithOperator)
            {
            case '+':
                sum = num1 + num2;
                break;
            case '-':
                sum = num1 - num2;
                break;
            case '*':
                sum = num1 * num2;
                break;
            case '/':
                sum = num1 / num2;
                break;
            default:
                cout << "Invalid Arithmetic Operator are provided!" << endl;
                break;
            }

            cout << "---" << endl;
            cout << num1 << " " << arithOperator << " " << num2 << endl;
            cout << "result: " << sum << endl;
            break;
        } else {
            cout << "please provide valid arithmetic operator (+, -, *, /)!" << endl;
            continue;
        }
    }
}

void task12() {
    int startCoorsX, startCoorsY, moveCoorsX, moveCoorsY;

    cout << "rook moves horizontally and vertically, like plus sign +!" << endl;

    cout << "input start coordinates of rook, x and y: " << endl;
    cin >> startCoorsX >> startCoorsY;

    cout << "input move coordinates of rook, x and y: " << endl;
    cin >> moveCoorsX >> moveCoorsY;

    // rook moves horizontally and vertically, like plus sign +, in chessboard 8x8
    // move x == 4 and y == 1-8
    // move x == 1-8 and y == 4
    if (
        // for Vertical X coordinates
        ((startCoorsX == moveCoorsX) && 
        (1 <= moveCoorsY || moveCoorsY <= 8)) ||  // move coors Y - start coors Y (8-4=4 == true) (other less or greater == false) | (then their problem with moving back with negative -2 num)
        // for Horizontal Y coordinates
        ((startCoorsY == moveCoorsY) && 
        (1 <= moveCoorsX || moveCoorsX <= 8))
    )
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

void task13() {
    int startCoorsX, startCoorsY, moveCoorsX, moveCoorsY;

    cout << "king moves horizontally, vertically and diagonally, but only 1 square!" << endl;

    cout << "input start coordinates of king, x and y: " << endl;
    cin >> startCoorsX >> startCoorsY;

    cout << "input move coordinates of king, x and y: " << endl;
    cin >> moveCoorsX >> moveCoorsY;

    // king moves horizontally, vertically and diagonally, but only 1 square, like plus sign +, in chessboard 8x8
    // start x +1(-1) == move x and start y +1(-1) == move y,
    // start x +1(-1) == move y or start y +1(-1) == move x
    if (
        (  // for Vertical X, Y and Horizontal X, Y
            ((startCoorsX +1 || -1) == moveCoorsX) &&
            ((startCoorsY +1 || -1) == moveCoorsY)
        ) ||
        (  // for Diagonally X, Y ranged +1 and -1 around
            ((startCoorsX +1 || -1) == moveCoorsY) ||
            ((startCoorsY +1 || -1) == moveCoorsX)
        )
    )
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

void task14() {
    int startCoorsX, startCoorsY, moveCoorsX, moveCoorsY;

    cout << "queen moves diagonally, like x sign! and like rook horizontally and vertically +" << endl;

    cout << "input start coordinates of queen, x and y: " << endl;
    cin >> startCoorsX >> startCoorsY;

    cout << "input move coordinates of queen, x and y: " << endl;
    cin >> moveCoorsX >> moveCoorsY;

    // queen moves horizontally and vertically, like plus sign +, in chessboard 8x8
    // start x +1(+2, *2) == move x and start y +1(+2, *2) == move y
    int x1 = startCoorsX, y1 = startCoorsY, x2 = moveCoorsX, y2 = moveCoorsY;
    if (
        // for Horizontal move
        (x1 == x2) ||
        // Vertical move
        (y1 == y2) ||
        // for Diagonal move
        (abs(x1 - x2) == abs(y1 - y2))
    )
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

void task15() {
    int x1, y1, x2, y2;

    cout << "knight moves with the letter “G” - two squares vertically in any direction and \none square horizontally, or vice versa:" << endl;

    cout << "input start coordinates of knight, x and y: " << endl;
    cin >> x1 >> y1;

    cout << "input move coordinates of knight, x and y: " << endl;
    cin >> x2 >> y2;

    if (
        ((abs(x1 - x2) == 2 && abs(y1 - y2) == 1)) || 
        (abs(x1 - x2) == 1 && abs(y1 - y2) == 2)
    )
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

void task16() {
    int n, m, k;
    cin >> n >> m >> k;
    
    // check if it is possible to break exactly K pieces
    if (
        (k % n == 0 || k % m == 0) && 
        k < n * m
    ) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

void task17() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    
    // calc min distance to edges
    int distToLongEdge = min(x, n - x);
    int distToShortEdge = min(y, m - y);
    
    // minimum of 2 distances
    cout << min(distToLongEdge, distToShortEdge) << endl;
}

void task18() {
    int a, b, c;
    cin >> a >> b >> c;
    
    //if (a > b) a = b;
    //if (a > c) a = c;
    //if (b > c) b = c;

    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    cout << a << " " << b << " " << c << endl;
}

int main()
{
    task18();
}