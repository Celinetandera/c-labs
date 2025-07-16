// lab8.celinetandera.cpp 

#include <iostream>
#include <iomanip>
using namespace std;

double kineticEnergy(double mass, double velocity) {
    return 0.5 * mass * velocity * velocity;
}

int main() {
    double mass, velocity;

    cout << "Enter the object's mass in kilograms: ";
    cin >> mass;

    cout << "Enter the object's velocity in meters per second: ";
    cin >> velocity;

    double KE = kineticEnergy(mass, velocity);

    cout << fixed << setprecision(2);
    cout << "The object's kinetic energy is " << KE << " joules." << endl;

    return 0;
}
