#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Skolko deneg vu polychaete?: ";
    cin >> a;

	if (a > 999)
	{
		if (a > 999999)
		{
			cout << "Ti milioner";
		}
		if (a < 1000000)
		{
			cout << "Tak derzhat";
		}
	}
	if (a < 1000) 
	{
		cout << "Rabotai bolshe";
	}

    cout << ", no ti molodec!";
}
