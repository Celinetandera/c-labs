// lab15.celinetandera.cpp 

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Structure to hold weather data
struct WeatherData {
    double totalRainfall;
    double highTemp;
    double lowTemp;
    double avgTemp;
};

const int MONTHS = 12;
const string monthNames[MONTHS] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

int main() {
    WeatherData year[MONTHS];
    double totalRain = 0.0, avgMonthlyTemp = 0.0;
    double highestTemp = -101, lowestTemp = 141;
    int highestMonth = 0, lowestMonth = 0;

    // Collect data for each month
    for (int i = 0; i < MONTHS; i++) {
        cout << "\nEnter data for " << monthNames[i] << ":\n";

        // Total Rainfall
        cout << "Total rainfall (in inches): ";
        cin >> year[i].totalRainfall;
        while (year[i].totalRainfall < 0) {
            cout << "Rainfall can't be negative. Re-enter: ";
            cin >> year[i].totalRainfall;
        }

        // High Temperature
        cout << "High temperature: ";
        cin >> year[i].highTemp;
        while (year[i].highTemp < -100 || year[i].highTemp > 140) {
            cout << "Temperature must be between -100 and 140. Re-enter: ";
            cin >> year[i].highTemp;
        }

        // Low Temperature
        cout << "Low temperature: ";
        cin >> year[i].lowTemp;
        while (year[i].lowTemp < -100 || year[i].lowTemp > 140) {
            cout << "Temperature must be between -100 and 140. Re-enter: ";
            cin >> year[i].lowTemp;
        }

        // Calculate average temperature for the month
        year[i].avgTemp = (year[i].highTemp + year[i].lowTemp) / 2.0;

        // Accumulate totals
        totalRain += year[i].totalRainfall;
        avgMonthlyTemp += year[i].avgTemp;

        // Track highest and lowest temps
        if (year[i].highTemp > highestTemp) {
            highestTemp = year[i].highTemp;
            highestMonth = i;
        }
        if (year[i].lowTemp < lowestTemp) {
            lowestTemp = year[i].lowTemp;
            lowestMonth = i;
        }
    }

    // Final calculations
    double avgRainfall = totalRain / MONTHS;
    double avgOfMonthlyTemps = avgMonthlyTemp / MONTHS;

    // Output results
    cout << fixed << setprecision(2);
    cout << "\nWeather Summary for the Year:\n";
    cout << "----------------------------------\n";
    cout << "Total rainfall for the year: " << totalRain << " inches\n";
    cout << "Average monthly rainfall: " << avgRainfall << " inches\n";
    cout << "Highest temperature: " << highestTemp << "°F in " << monthNames[highestMonth] << endl;
    cout << "Lowest temperature: " << lowestTemp << "°F in " << monthNames[lowestMonth] << endl;
    cout << "Average of all monthly average temperatures: " << avgOfMonthlyTemps << "°F\n";

    return 0;
}
