#include <iostream>

using namespace std;

int main()
{
	int words = 0;
	int counter = 0;
	int i = 0;
	char mystring[255];
	cout << "Enter string: ";
	cin.getline(mystring,255);
	while (mystring[i] != 0)
	{
		if (mystring[i] >= 'a' && mystring[i] <= 'z' || mystring[i] >= 'A' && mystring[i] <= 'Z')
		{
			counter++;
		}
		else if (counter > 0)
		{
			words++;
			counter = 0;
		}
		i++;
	}
	if (counter > 0)
	{
		words++;
	}
	cout << "Result: " << words;
}