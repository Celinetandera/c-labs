// lab12.celinetandera.cpp

#include <iostream>
#include <iomanip>
using namespace std;

void sort(double*, int);
double averageDropLowest(double*, int);

int main()
{
	int numTestScores = 0;		
	double* pointer = nullptr;	
	double testAverage = 0;		

	cout << "\nHow many test scores will you enter? ";
	cin >> numTestScores;

	while (numTestScores < 0)
	{
		cout << "The number cannot be negative.\n";
		cout << "Enter another number:  ";
		cin >> numTestScores;
	}

	pointer = new double[numTestScores];

	for (int i = 0; i < numTestScores; i++)
	{
		cout << "Enter test score " << (i + 1) << ":  ";
		cin >> pointer[i];

		while (pointer[i] < 0)
		{
			cout << "Negative scores are not allowed.\n";
			cout << "Enter another score for this test:  ";
			cin >> pointer[i];
		}
	}

	sort(pointer, numTestScores);

	testAverage = averageDropLowest(pointer, numTestScores);

	cout << "\nThe test scores in ascending order, ";
	cout << "and their average,\n";
	cout << "(with the lowest score dropped) are:\n\n";
	cout << " Score" << endl;
	cout << " -----" << endl;

	for (int j = 0; j < numTestScores; j++)
	{
		cout << "\n" << fixed << setprecision(2)
			<< setw(6) << pointer[j];
	}

	cout << "\n\nAverage score:  " << setprecision(2)
		<< fixed << testAverage << endl << endl;

	delete[] pointer;
	pointer = nullptr;

	return 0;
}
void sort(double* score, int size)
{
	int startScan, minIndex;
	double minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = score[startScan];

		for (int index = startScan + 1; index < size; index++)
		{
			if (score[index] < minValue)
			{
				minValue = score[index];
				minIndex = index;
			}
		}

		score[minIndex] = score[startScan];
		score[startScan] = minValue;
	}
}
double averageDropLowest(double* score, int numScores)
{
	double total = 0;

	for (int k = 1; k < numScores; k++) 
	{
		total += score[k];
	}

	return (total / (numScores - 1));  
}
