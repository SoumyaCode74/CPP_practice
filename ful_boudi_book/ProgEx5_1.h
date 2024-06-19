#include <iostream>
#include <string>
#include <cstdint>

using namespace std;

class Bank_Account{
    private:
        string depositor_name;
        uint64_t account_number;
        string account_type;
        float current_balance;
    public:
        Bank_Account();
        int create_account(string, uint64_t, string, float);
        int deposit_amount(float);
        int withdraw_amount(float);
        void account_details(void);
};