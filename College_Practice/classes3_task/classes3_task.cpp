#include <iostream>

using namespace std;
int main()
{
    // ������ ����� �������
    int n;
    cout << "length array a: ";
    cin >> n;

    int array[n];

    // ������ ������ ������� ������� 
    cout << "������� " << n << " ������� �������: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }


    // ������� �������
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int count = array[j];
                array[j] = array[j + 1];
                array[j + 1] = count;
            }
        }
    }


    cout << endl;
    // �� �����������
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0) // % 2 == 1
        {
            cout << array[i] << ' ';
        }

    }

    // �� ��������
    for (int i = n - 1; i >= 0; i--)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << ' ';
        }

    }
    cout << endl;


}