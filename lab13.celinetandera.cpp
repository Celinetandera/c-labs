// lab13.celinetandera.cpp : 

#include <iostream>
using namespace std;

int* reverseArray(int[], int);
void showArray(int[], int);

int main()
{
	const int SIZE = 10;
	int values[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "The contents of the original array are:\n";
	showArray(values, SIZE);

	int* arrCopy = reverseArray(values, SIZE);

	cout << "The contents of the copy are:\n";
	showArray(arrCopy, SIZE);

	return 0;
}
               
int* reverseArray(int arr[], int size)
{
	int sourceIndex;  
	int targetIndex;  

	if (size <= 0)
		return NULL;

	int* copy = new int[size];

	for (sourceIndex = size - 1, targetIndex = 0; 
		sourceIndex >= 0;                       
		sourceIndex--, targetIndex++)            
	{
		copy[targetIndex] = arr[sourceIndex];
	}

	return copy;
}

void showArray(int arr[], int size)
{
	for (int index = 0; index < size; index++)
		cout << arr[index] << " ";

	cout << endl;
}