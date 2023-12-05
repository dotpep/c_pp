#include <iostream>
//#include <classes3_presentation_task1>

using namespace std;

void loginAuth() {
    cout << "....in proccess" << endl;
    cout << "..in proccess" << endl;
    cout << "Authentication" << endl;
    cout << "-----" << endl;
    cout << "Succes pass Authentications" << endl;
}


void loginSmartCard() {
    cout << "....in proccess" << endl;
    cout << "..in proccess" << endl;
    cout << "Smart Card" << endl;
    cout << "-----" << endl;
    cout << "Succes login with Smart Card" << endl;
}


int main()
{
    string textAuth = "Auth";
    string textSmartCard = "Smart";
    string textlogin = "Login";

    string userText;

    do
    {
        if (userText == textAuth || userText == textSmartCard) {
            break;
        }

        cout << "Write |" << textAuth << "| or |" << textSmartCard << "| or |" << textlogin << "| for enter the system: ";
        cin >> userText;
    } while (true);


    if (userText == textAuth) {
        loginAuth();
    }
    else if (userText == textSmartCard) {
        loginSmartCard();
    }
    else if (userText == textlogin)
    {
        cout << "NotImplementend";
        // classes3_presentation_task1 solution import this my project and include it: main() functions
    }

}