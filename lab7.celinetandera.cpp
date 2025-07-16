// lab7.celinetandera.cpp 

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int population; 
    ifstream inputFile;

    inputFile.open("People.txt");

    cout << "PRAIRIEVILLE POPULATION GROWTH\n";
    cout << "(each * represents 1000 people)\n\n";

    for (int year = 1900; year <= 2000; year += 20)
    {
        inputFile >> population;

        cout << year << " ";

        for (int star = 1; star <= (population / 1000); star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    inputFile.close();
}

