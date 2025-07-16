// lab9.celinetandera.cpp

#include <iostream>
#include <iomanip> 
using namespace std;

double calculateCharges(int days, double rate, double meds, double services) {
    return (days * rate) + meds + services;
}

double calculateCharges(double services, double meds) {
    return services + meds;
}

int main() {
    char patient;
    double total;

    cout << "Enter I for in-patient or O for out-patient: ";
    cin >> patient;

    cout << fixed << setprecision(2); 

    if (patient == 'I' || patient == 'i') {

        int days;
        double rate, meds, services;

        cout << "Enter number of days in hospital: ";
        cin >> days;
        if (days < 0) {
            cout << "Days cannot be negative.\n";
            return 0;
        }

        cout << "Enter daily rate: ";
        cin >> rate;
        if (rate < 0) {
            cout << "Daily rate cannot be negative.\n";
            return 0;
        }

        cout << "Enter hospital medication charges: ";
        cin >> meds;
        if (meds < 0) {
            cout << "Medication charges cannot be negative.\n";
            return 0;
        }

        cout << "Enter hospital services charges: ";
        cin >> services;
        if (services < 0) {
            cout << "Service charges cannot be negative.\n";
            return 0;
        }

        total = calculateCharges(days, rate, meds, services);
    }
    else if (patient == 'O' || patient == 'o') {
     
        double meds, services;

        cout << "Enter hospital service charges: ";
        cin >> services;
        if (services < 0) {
            cout << "Service charges cannot be negative.\n";
            return 0;
        }

        cout << "Enter hospital medication charges: ";
        cin >> meds;
        if (meds < 0) {
            cout << "Medication charges cannot be negative.\n";
            return 0;
        }

        total = calculateCharges(services, meds);
    }
    else {
        cout << "Invalid option. Please enter 'I' or 'O'.\n";
        return 0;
    }

    cout << "Total hospital charges: $" << total << endl;

    return 0;
}


