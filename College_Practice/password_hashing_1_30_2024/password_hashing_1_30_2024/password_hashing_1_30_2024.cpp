#include <iostream>
#include <string>
#include <functional> // std::hash

using namespace std;

// (string&) & means create reference of object
int hashPassword(const string& password) {
    hash<string> hasher;
    return hasher(password);
}

void printHashPassword(const string& original_password, int saved_hash) {
    cout << "Original password: " << original_password << endl;
    cout << "Hash of password: " << saved_hash << endl;
}

int saveHashPassword(int hashed_password) {
    int saved_hash_password_in_db = hashed_password;
    return hashed_password;
}

bool checkPassword(const string& entered_password, int saved_hash) {
    int entered_hash = hashPassword(entered_password);
    return entered_hash == saved_hash;
}

string handleUserPassword() {
    string password;
    cout << "Enter password: ";
    cin >> password;
    return password;
}

int main() {
    cout << "I am hashing your password, please enter it below!\n";

    string password = handleUserPassword();

    cout << "---\n";

    int hashed_password = hashPassword(password);

    int saved_hash = saveHashPassword(hashed_password);

    printHashPassword(password, saved_hash);

    cout << "---\n";

    cout << "Enter valid password to login account!\n";

    bool isLogined = false;

    do {
        string reentered_password = handleUserPassword();

        cout << "---\n";

        if (checkPassword(reentered_password, saved_hash)) {
            cout << "Access logged in. Password is correct.\n\n";
            isLogined = true;
        }
        else {
            cout << "Access denied. Password is incorrect. Please try again.\n\n";
            cout << "---\n";
            isLogined = false;
        }
    } while (!isLogined);
}
