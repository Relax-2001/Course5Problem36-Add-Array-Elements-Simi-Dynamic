#include <iostream>

using namespace std;

int ReadNumber()
{

	int Number = 0;
	cout << "Please enter a number\n";
	cin >> Number;

	return Number;
}

void AddArrayElement(int Arr[100] , int Number , int& ArrayLength)
{
	ArrayLength++;
	Arr[ArrayLength - 1 ] = Number;
}

void InputUserNumbersInArray(int Arr[100], int& ArryLength)
{
	bool AddMore = true ;
	
	do
	{
		AddArrayElement(Arr , ReadNumber(), ArryLength);
		cout << "Do you want to add more numbers ? [1]Yes [0] No\n";
		cin >> AddMore;

	} while (AddMore);
	

}

void PrintArray(int Arr[100], int ArrayLength)
{
	cout << "Array length = " << ArrayLength << "\n";

	cout << "Array elements : ";
	for (int i = 0; i <= ArrayLength - 1; i++)
		cout << Arr[i] << " ";

	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));


	int Arr[100], Length = 0;
	InputUserNumbersInArray(Arr , Length);
	PrintArray(Arr , Length);

	return 0;
}