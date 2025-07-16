// lab4.celinetandera.cpp

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double principal, rate, interest, amount;
    int times;

    cout << "Enter the principal amount: $";
    cin >> principal;

    cout << "Enter the interest rate: ";
    cin >> rate;

    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> times;

    amount = principal * pow(1 + (rate / times), times);
    interest = amount - principal;

    cout << "Principal:$" << principal << endl;
    cout << "Interest Rate:" << rate * 100 << "%" << endl;
    cout << "Times Compounded:" << times << endl;
    cout << "Interest Earned:$" << interest << endl;
    cout << "Amount in Savings:$" << amount << endl;

    return 0;
}



