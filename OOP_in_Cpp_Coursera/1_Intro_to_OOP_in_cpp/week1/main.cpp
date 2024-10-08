#include <iostream>

using namespace std;

void printMenuInfo() {
    // 1. print help
    cout << "1: Print help" << endl;
    // 2. print exchange stats
    cout << "2: Print exchange stats" << endl;
    // 3. make an offer (sell)
    cout << "3: Make an offer (sell)" << endl;
    // 4. make a bid (buy)
    cout << "4: Make a bid (buy)" << endl;
    // 5. print wallet
    cout << "5: Print wallet" << endl;
    // 6. continue (next time step)
    cout << "6: Continue (next time step)" << endl;

    cout << "============" << endl;
    cout << "Type in 1-6, to continue." << endl;
}

void optionInfo(int userOption){
    if (userOption == 0)
    {
        cout << "Invalid choice. Choose 1-6" << endl;
    }

    if (userOption == 1)
    {
        cout << "Help - your aim is to make money. Analyse the market and make bids and offers." << endl;
    }

    if (userOption == 2)
    {
        cout << "Market looks good" << endl;
    }

    if (userOption == 3)
    {
        cout << "Mark and offer - enter the amount" << endl;
    }

    if (userOption == 4)
    {
        cout << "Make a bid - enter the amount" << endl;
    }

    if (userOption == 5)
    {
        cout << "Your wallet is empthy. " << endl;
    }

    if (userOption == 6)
    {
        cout << "Going to next time frame. " << endl;
    }
}

void handleUserOptionInput(int userOption){
    switch (userOption)
    {
    case 1:
        cout << "Help - your aim is to make money. Analyse the market and make bids and offers." << endl;
        break;
    case 2:
        cout << "Market looks good" << endl;
        break;
    case 3:
        cout << "Mark and offer - enter the amount: " << endl;
        break;
    case 4:
        cout << "Make a bid - enter the amount: " << endl;
        break;
    case 5:
        cout << "Your wallet is empthy. " << endl;
        break;
    case 6:
        cout << "Going to next time frame. " << endl;
        break;
    default:
        cout << "Invalid choice. Choose between 1-6" << endl;
        break;
    }
}

void test1(){
    //std::printf("sdasd\n");
    //std::printf("sdasd");

    //int age;

    //cout << "your age: ";
    //cin >> age;

    //cout << "your age is " << age;

    //int userOption;
    //do
    //{
    //    printInfo();

    //    cout << ": ";
    //    cin >> userOption;

    //} while (1 <= userOption && userOption >= 6);




        // Validation
        //if (!(int)userOption)
        //{
        //    cout << "============" << endl;
        //    cout << "String or Incorrect type of data was given!" << endl;
        //    userOption = 0;
        //    break;
        //}

        //if(!cin) {
        //    cout << "============" << endl;
        //    cout << "cin standard method was corrupted!" << endl;
        //    userOption = 0;
        //    break;
        //}

        //if (INT_MIN <= userOption && userOption <= INT_MAX)
        //{
        //    cout << "============" << endl;
        //    cout << "Num is out of integer range! it is too big or small." << endl;
        //    break;
        //}
        
}
//bool isValidUserInput(int userOption){ }

int main(){
    int userOption;

    while (true)
    {
        printMenuInfo();

        cout << ": ";
        cin >> userOption;

        bool isValidUserNumBetweenOption = 1 <= userOption && userOption <= 6 ? true: false;
        if (isValidUserNumBetweenOption)
        {
            break;
        } else {
            cout << "============" << endl;
            cout << "Invalid choice. Choose between 1-6. ";
            cout << "Your choice was: " << userOption << endl;
            cout << "============" << endl;
            continue;
        }
    }

    cout << "============" << endl;
    cout << "You choose: " << userOption << endl;
    handleUserOptionInput(userOption);
}