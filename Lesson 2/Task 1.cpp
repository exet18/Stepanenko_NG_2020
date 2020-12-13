#include<iostream>
using namespace std;

int main()
{
	int schools[10];
	int urschool;
	int counter = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "enter school numbers: ";
		cin >> schools[i];
	}
	cout << "enter ur school:";
	cin >> urschool;
	for (int i = 0; i < 10; i++)
	{
		if (schools[i] == urschool)
			counter++;
	}
	if (counter >= 1)
		cout << "I know that school: ";
	else 
		cout << "I dont know that school: ";
}