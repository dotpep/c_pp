#include <iostream>

using namespace std;

void printMenuInfo(){
    cout << "1: Print help" << endl;
    cout << "2: Print exchange stats" << endl;
    cout << "3: Make an offer (sell)" << endl;
    cout << "4: Make a bid (buy)" << endl;
    cout << "5: Print wallet" << endl;
    cout << "6: Continue (next time step)" << endl;

    cout << "============" << endl;
    cout << "Type in 1-6, to continue." << endl;
}

void printHelpInfo(){
    cout << "Help - your aim is to make money. Analyse the market and make bids and offers." << endl;
}

void printMarketStats(){
    cout << "Market looks good" << endl;
}

void printWalletInfo(){
    cout << "Your wallet is empthy. " << endl;
}

void printInvalidChoiceUserOption(){
    printMenuInfo();
    cout << "============" << endl;
    cout << "Invalid choice! Choose between 1-6. " << endl;
    cout << "============" << endl;
}