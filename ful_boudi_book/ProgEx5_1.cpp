#include "ProgEx5_1.h"

Bank_Account::Bank_Account(){
    ;
}

int Bank_Account::create_account(string holder_name, uint64_t account_number, string type_of_account, float initial_deposit){
    depositor_name = holder_name;
    account_number = account_number;
    account_type = type_of_account;
    current_balance = initial_deposit;
    return 0;
};

int Bank_Account::deposit_amount(float amount){
    current_balance += amount;
    cout << "Updated balance: INR " << current_balance << endl;
    return 0;
};

int Bank_Account::withdraw_amount(float amount){
    if(current_balance < amount){
        cout << "Not enough funds available!" << endl;
    }
    else{
        current_balance -= amount;
        cout << "Updated balance: INR " << current_balance << endl;
    }
    return 0;
};

void Bank_Account::account_details(void){
    cout << "Name of account holder: " << depositor_name << "\nCurrent balance: INR " << current_balance << endl;
};

int main(){
    Bank_Account new_account;
    new_account.create_account("Soumyadeep Bose", 0x12345678, "savings", 10000.0);
    new_account.deposit_amount(2000.0);
    new_account.withdraw_amount(1000.0);
    new_account.withdraw_amount(12000.0);
    new_account.account_details();

    return 0;
}
