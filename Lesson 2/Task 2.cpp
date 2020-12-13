#include<iostream>
using namespace std;

int main()
{
	int cards[10]{ 0,0,0,0,0,0,0,0,0,0 };
	int cardsnumber, cash, sum;

	while(true)
	{
		sum = 0;
		cout << "Enter card number: ";
		cin >> cardsnumber;
		if(cardsnumber > 0 and cardsnumber <= 10)
		{
			cout << "How much do you want to put on the card: ";
			cin >> cash;
			cards[cardsnumber - 1] += cash;
			for (int i = 0; i < 10; i++)
			{
				cout << "card number" << i + 1 << ": " << cards[i] << endl;
				sum += cards[i];
			}
		}
		else 
		{
			cout << "Error: Card number not found";
		}
		cout << "Sum on all cards: "<< sum << endl;
	}


}