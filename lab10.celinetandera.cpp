// lab10.celinetandera.cpp 

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

double findMin(const vector<double>& arr) {
    double min = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

double findMax(const vector<double>& arr) {
    double max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

double findSum(const vector<double>& arr) {
    double sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return sum;
}

double findAverage(const vector<double>& arr) {
    return findSum(arr) / arr.size();
}

int main() {
    string filename;
    vector<double> numbers;
    double value;

    cout << "Enter the file name: ";
    cin >> filename;

    ifstream inputFile(filename);
    if (!inputFile) {
        cout << "Error opening file.\n";
        return 1;
    }

    while (inputFile >> value) {
        numbers.push_back(value);
    }

    inputFile.close();

    if (numbers.empty()) {
        cout << "No numbers found in the file.\n";
        return 1;
    }

    double min = findMin(numbers);
    double max = findMax(numbers);
    double sum = findSum(numbers);
    double avg = findAverage(numbers);

    cout << "\nLowest: " << min << endl;
    cout << "Highest: " << max << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;

    return 0;
}
