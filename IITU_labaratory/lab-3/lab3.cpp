#include <iostream>
#include <list>
#include <cmath>
#include <set>
#include <vector>

using namespace std;

double average(list<double> nums)
{
    double sum = 0;
    for(const auto& n : nums)
    {
        sum+=n;
    }
    return (sum / nums.size());
}

void task1() {
    list<double> numberList;
    double avg, temp;

    while (true)
    {
        cout << "enter set of numbers below and type 0 to stop it (will gave u avg):" << endl;
        cin >> temp;
        if (temp == 0){
            break;
        } else {
            numberList.push_back(temp);
            continue;
        }
    }

    avg = average(numberList);
    cout << "total inputed amout of nums: " << numberList.size() << endl;
    cout << "average: " << avg << endl;
}

double maximum(list<double> nums)
{
    double max = 0;
    for(const auto& n : nums)
    {
        if (max < n)
        {
            max = n;
        }
    }
    return max;
}

void task2(){
    list<double> numberList;
    double max, temp;

    while (true)
    {
        cout << "enter set of numbers below and type 0 to stop it (will gave u max):" << endl;
        cin >> temp;
        if (temp == 0){
            break;
        } else {
            numberList.push_back(temp);
            continue;
        }
    }

    max = maximum(numberList);
    cout << "maximum: " << max << endl;
}

void task3() {
    int n, sqrNum = 1;

    cout << "write natural number: ";
    cin >> n;

    while ((sqrNum * sqrNum) < n)
    {
        cout << (sqrNum * sqrNum) << endl;
        sqrNum++;
    }
}

void task4() {
    int n;

    do {
        cout << "give integer not less than 2: ";
        cin >> n;
        if (n > 2) break;
        else continue;
    } while (true);

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            cout << i << endl;
            break;
        }
    }

}

void task5(){
    int n;

    cout << "give number: ";
    cin >> n;

    int terms, sum = 0;

    cout << "first " << n << "sequence terms: ";
    for (int i = 0; i < n; i++)
    {
        terms = (i*2)+1;  // odd
        cout << terms << " ";
        sum += terms;
    }
    cout << endl;
    cout << "sum of this terms is: " << sum << endl;
}

void task6() {
    int n;

    cout << "give number: ";
    cin >> n;

    int i = 1;
    while (i < n)
    {
        cout << i << " ";
        i += i;
    }
}

void task7(){
    int count = 0, temp, notCountedN;

    while (true)
    {
        cout << "enter set of numbers (0 stop):" << endl;
        cin >> temp;

        if (temp != 0){
            count++;
            continue;
        } else if (temp == 0) {
            cout << "enter set of numbers (0 stop):" << endl;
            cin >> notCountedN;
            if (notCountedN == -1)
            {
                break;
            }
            break;
        }
    }
    cout << "sequence number amount before 0 inputed: " << count << endl;
}

void task8(){
    int sum = 0, temp;

    while (true)
    {
        cout << "enter set of numbers (0 stop):" << endl;
        cin >> temp;

        if (temp == 0){
            break;
        } else {
            sum += temp;
            continue;
        }
    }
    cout << "sequence number sum: " << sum << endl;
}

int factorial(int n)  // recursive func
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

void task9(){
    int n;

    cout << "enter N to factorial: ";
    cin >> n;

    //factorial = 5 * 4 * 3 * 2 * 1;

    cout << "factorial: " << factorial(n) << endl;
}

void task10(){
    //list<int> numberList;
    int max = 0, secondMax = 0, temp;

    while (true)
    {
        cout << "enter set of numbers (0 to stop):" << endl;
        cin >> temp;
        if (temp == 0) break;

        if (temp > max) {
            secondMax = max;
            max = temp;
        } else if (temp > secondMax) {
            secondMax = temp;
        }
    }

    //for (const auto& num : numberList) {  // find first max
    //    if (num > max) {
    //        max = num;
    //    }
    //}

    //for (const auto& num : numberList) {
    //    if (num > secondMax && num < max) {  // find second max, ignore duplicate
    //        secondMax = num;
    //    }
    //}

    cout << "second maximum: " << secondMax << endl;
}

int fibonacci(int n)
{
    // Solution 1
    //int a = 0, b = 1, c, i;
    //if (n == 0)
    //    return a;
    //for (i = 2; i <= n; i++) {
    //    c = a + b;
    //    a = b;
    //    b = c;
    //}
    //return b;

    // Solution 2 (with recurcive func)
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void task11(){
    int n;

    cout << "enter num to fibonacci: ";
    cin >> n;

    cout << "fibonacci of num - Nth F(N): " << fibonacci(n) << endl;
}

int findFibonacciNum(int num) {
    // -1 invalid input
    if (num < 0) return -1;

    int a = 0, b = 1, n = 1;  // F(0) = 0, F(1) = 1

    // find fib
    while (b < num) {
        int next = a + b;
        a = b;
        b = next;
        n++;
    }

    if (b == num) {
        return n;  // index fib num
    } else {
        return -1;  // -1 if num is not fub num
    }
}

void task12() {
    int n;

    cout << "num to find the fibonacci index: ";
    cin >> n;

    int index = findFibonacciNum(n);
    cout << "fibonacci index: " << index << endl;
}

int findDuplicateAmount(list<int> nums){
    int dupAmount = 0;

    int firstElem = nums.front();
    for (const auto& n : nums) {
        if (n == firstElem) {
            dupAmount++;
            firstElem = n;
        }
    }
    
    return dupAmount;
}

void task13(){
    list<int> numberList;
    int amount, temp;

    while (true)
    {
        cout << "enter set of numbers (0 to stop):" << endl;
        cin >> temp;
        if (temp == 0){
            break;
        } else {
            numberList.push_back(temp);
            continue;
        }
    }

    amount = findDuplicateAmount(numberList);

    cout << "duplicated num amount: " << amount << endl;
}

void task14(){
    vector<int> numSequence;
    int temp;

    while (true)
    {
        cout << "enter set of numbers (0 to stop):" << endl;
        cin >> temp;
        if (temp == 0){
            break;
        } else {
            numSequence.push_back(temp);
            continue;
        }
    }

    int localMaxCount = 0;

    for (int i = 1; i < numSequence.size() - 1; ++i) {
        if (
            (numSequence[i] > numSequence[i - 1]) && 
            (numSequence[i] > numSequence[i + 1])
        ) {
            localMaxCount++;  // found local max
        }
    }
    cout << "local max count: " << localMaxCount << endl;
}

void task15(){
    vector<int> numSequence;
    int temp;

    while (true)
    {
        cout << "enter set of numbers (0 to stop):" << endl;
        cin >> temp;
        if (temp == 0){
            break;
        } else {
            numSequence.push_back(temp);
            continue;
        }
    }

    // solution:
    vector<int> localMaxIndices;

    // local maxima
    for (int i = 1; i < numSequence.size() - 1; ++i) {
        if (numSequence[i] > numSequence[i - 1] && numSequence[i] > numSequence[i + 1]) {
            localMaxIndices.push_back(i);  // store index
        }
    }

    // special case: less than 2 local maxima
    if (localMaxIndices.size() < 2) {
        cout << 0 << endl;
    }

    // min distance between local maxima
    int minDistance = numeric_limits<int>::max();

    for (int i = 0; i < localMaxIndices.size(); ++i) {
        for (int j = i + 1; j < localMaxIndices.size(); ++j) {
            int distance = localMaxIndices[j] - localMaxIndices[i] - 1; // dis calc
            if (distance < minDistance) {
                minDistance = distance;
            }
        }
    }

    cout << "min distance between local maxima is: " << minDistance << endl;
}

int main() {
    task15();
}