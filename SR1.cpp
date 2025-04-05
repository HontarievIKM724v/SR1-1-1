#include <iostream>
#include <string>
using namespace std;


struct BankAccount {
    string name;
    string number;
    double balance;
};

void deposit(BankAccount* user);
void withdraw(BankAccount* user);
void displayTheBalance(BankAccount* user);

int main() {
    cout << "Enter number of accounts: ";
    unsigned short n;
    cin >> n;
    BankAccount* accounts = new BankAccount[n];

    for (int i = 0; i < n; i++) {

        cout << "\Account #" << i << ": ";



        cout << "\n\tName: ";

        cin >> accounts[i].name;



        cout << "\n\tNumber of bank account: ";

        cin >> accounts[i].number;



        cout << "\n\tBalance: ";

        cin >> accounts[i].balance;

    }



    cout << "\n\n\nAccounts List\n\n\n";

    for (int i = 0; i < n; i++) {

        cout << "\nAccount #" << i << ": ";

        cout << "\n\tName: " << accounts[i].name;

        cout << "\n\tNumber of bank account: " << accounts[i].number;


    }
    cout << endl << endl;
    unsigned short c,x;
    while (1) {
            
        cout << "\n Enter the account number you want to interact with: ";
        cin >> c;
        cout << "\nWhat would you like to do (enter a number): \n\t1 - Deposit money into the account \n\t2 - Withdraw money from the account \n\t3 - Show account balance \n\t4 - Exit the program\n\t\n\n";
        cin >> x;
        switch (x)
            {
        case 1:
            deposit(&accounts[c]);
            break;
        case 2:
            withdraw(&accounts[c]);
            break;
        case 3:
            displayTheBalance(&accounts[c]);
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid option. Try again.\n";
        }
       if (x == 4) {
           break;
       }

    }

    delete[] accounts;

}

void deposit(BankAccount* user) {
    cout << "\nEnter the amount you want to deposit: ";
    double a;
    cin >> a;
    user->balance += a;
    cout << "\nDeposit successful. Current account balance: " << user->balance;
}

void withdraw(BankAccount* user) {
    cout << "\nEnter the amount you want to withdraw: ";
    double a;
    cin >> a;
    user->balance -= a;
    cout << "\nAccount updated. Current account balance: " << user->balance;
}

void displayTheBalance(BankAccount* user) {
    cout << "\nCurrent account balance: " << user->balance;
}