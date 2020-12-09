#include <iostream>

using namespace std;

int main()
{
	int size;

	cout << "enter size pyramids: ";
	cin >> size;
	for (int j = 1; j <= size; j++)
	{
		for (int i = 0; i < size; i++) 
		{
			cout << "*";
		}
		cout << "\n";
	}
	cout << ".............................................." << endl;

	for (int j = 1; j <= size; j++)
	{
		for (int i = size - j; i < size; i++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	cout << ".............................................." << endl;

	for (int j = 0; j <= size; j++)
	{
		for (int i = j; i < size; i++)
		{
			cout << "*";
		}
		for (int g = j; g <= size; g++) 
		{
			cout << " ";
		}
		cout << endl;
	}
	cout << ".............................................." << endl;

	for (int j = 0; j < size; j++)
	{
		for (int i = j ; i < size-1; i++)
		{
			cout << " ";
		}
		for (int g = size - j; g <= size; g++) 
		{
			cout << "*";
		}
		cout << "\n";
	}
	cout << ".............................................." << endl;

	for (int j = 0; j < size; j++)
	{
		for (int g = size-j; g < size; g++)
		{
			cout << " ";
		}
		for (int i = j; i < size; i++)
		{
			cout << "*";
		}
		cout << "\n";
	}

}
