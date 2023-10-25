#include <iostream>
#include <cmath>


using namespace std;
int main()
{
    int N;
    cout << "N: ";
    cin >> N;

    if (N > 0) {
        int* array = new int[N];

        for (int i = 0; i < N; i++) {
            array[i] = pow(2, i + 1);
        }

        cout << pow(2, N) << endl;


        for (int i = 0; i < N; i++) {
            cout << array[i];
        }
    }


// task 1
    //int n = 6;
    //cout << "n: ";
    //cin >> n;

    //int array[] = {1, 2, 3, 4, 5, 6};


    //for (int i = 0; i < n; ++i) 
    //{
    //    if (array[i] % 2 != 0) 
    //    {
    //        cout << array[i] << endl;
    //    }
    //}

    //for (int i = 0; i < n; ++i)
    //{
    //    if (n % 2 ==  0) 
    //    { 
    //        int k = k++;
    //        cout << array[k] << endl;
    //    }

    //}
}