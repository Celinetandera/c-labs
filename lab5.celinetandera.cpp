// lab5.test.cpp 

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    int choice;
    double radius, length, width, base, height, area;

    // Display menu
    cout << "Geometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        area = PI * radius * radius;
        cout << "Area of the circle: " << area << endl;
        break;

    case 2:
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        area = length * width;
        cout << "Area of the rectangle: " << area << endl;
        break;

    case 3:
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        area = 0.5 * base * height;
        cout << "Area of the triangle: " << area << endl;
        break;

    case 4:
        cout << "Goodbye!" << endl;
        break;

    default:
        cout << "Invalid choice. Please run the program again." << endl;
        break;
    }

    return 0;
}

