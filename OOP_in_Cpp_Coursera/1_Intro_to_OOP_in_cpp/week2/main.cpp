#include <iostream>
#include <limits>

using namespace std;

void printMenuInfo();
void printHelpInfo();
void printMarketStats();
void printWalletInfo();
void printInvalidChoiceUserOption();

bool isValidRangeUserOption(int userOption);

void processOfferSelling();
void processBidBuying();
void processNextTimeFrame();

void handleUserOptionInput(int userOption){
    switch (userOption)
    {
        case 1: printHelpInfo(); break;
        case 2: printMarketStats(); break;
        case 3: processOfferSelling(); break;
        case 4: processBidBuying(); break;
        case 5: printWalletInfo(); break;
        case 6: processNextTimeFrame(); break;
        default: printInvalidChoiceUserOption(); break;
    }
}

int getUserOptionNumber(){
    int userOption;

    while (true)
    {
        cout << ": ";
        cin >> userOption;

        cout << "============" << endl;

        // TODO: if user write 'exit' then exite the program (type 'exit' to end & exit program!)

        // restart and clear cin error value
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            printInvalidChoiceUserOption();
        } else if (isValidRangeUserOption(userOption))
        {
            return userOption;
        } else {
            printInvalidChoiceUserOption();
        }
    }
}

int main(){
    // Program Flow
    while (true)
    {
        printMenuInfo();

        int userOption = getUserOptionNumber();

        cout << "============" << endl;
        cout << "You choose: " << userOption << endl;
        handleUserOptionInput(userOption);
        cout << "============" << endl;
    }
}