// lab6.celinetandera.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int days;
    double dailyPay = 0.01;
    double totalPay = 0.0;

    cout << "Enter the number of days worked: ";
    cin >> days;

    while (days < 1) {
        cout << "Please enter a number of days greater than 0: ";
        cin >> days;
    }

    cout << fixed << setprecision(2);
    cout << "\nDay\tDaily Pay (in $)\n";

    for (int day = 1; day <= days; ++day) {
        cout << day << "\t$" << dailyPay << endl;

        totalPay += dailyPay;
        dailyPay *= 2;
    }

    cout << "Total pay: $" << totalPay << endl;

    return 0;
}
