#include<iostream>
using namespace std;

int main()
{
	int num[10];
	int num2;
	int counter = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "enter school numbers: ";
		cin >> num[i];
	}
	cout << "enter ur school:";
	cin >> num2;
	for (int i = 0; i < 10; i++)
	{
		if (num[i] == num2)
			counter++;
	}
	if (counter >= 1)
		cout << "I know that school: ";
	else 
		cout << "I dont know that school: ";
}