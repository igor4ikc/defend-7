#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int** a, const int rowCount, const int colCount, const int Low,
	const int High);
void Print(int** a, const int rowCount, const int colCount);
int main()
{
	srand((unsigned)time(NULL));
	int Low = 7;
	int High = 62;
	int rowCount = 2;
	int colCount = 2;
	int** a = new int* [rowCount];
	for (int m = 0; m < rowCount; m++)
		a[m] = new int[colCount];
	Create(a, rowCount, colCount, Low, High);
	Print(a, rowCount, colCount);
	for (int m = 0; m < rowCount; m++)
		delete[] a[m];
	delete[] a;
	return 0;
}
void Create(int** a,  const int rowCount, const int colCount, const int Low,
	const int High)
{
	for (int m = 0; m < rowCount; m++)
		for (int n = 0; n < colCount; n++)
			a[m][n] = Low + rand() % (High - Low + 1);
}
void Print(int** a, const int rowCount, const int colCount)
{
	cout << endl;
	for (int m = 0; m < rowCount; m++)
	{
		for (int n = 0; n < colCount; n++)
			cout << setw(4) << a[m][n];
		cout << endl;
	}
	cout << endl;
}
