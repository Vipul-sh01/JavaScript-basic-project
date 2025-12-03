#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    const int accountId = 144553;
    string accountEmail = "hitesh@google.com";
    string accountPassword = "12345";
    string accountCity = "Jaipur";
    string accountState;

    accountEmail = "hc@hc.com";
    accountPassword = "21212121";
    accountCity = "Bengaluru";

    cout << "accountId: " << accountId << endl;

    cout << left << setw(15) << "Account ID"
         << setw(20) << "Email"
         << setw(15) << "Password"
         << setw(15) << "City"
         << "State" << endl;

    cout << setw(15) << accountId
         << setw(20) << accountEmail
         << setw(15) << accountPassword
         << setw(15) << accountCity
         << accountState << endl;
    return 0;
}
