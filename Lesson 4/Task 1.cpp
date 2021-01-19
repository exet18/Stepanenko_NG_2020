#include <iostream>
using namespace std;
int inputinCards(int cards[], int cardsnumber, int sum)
{
  int cash;
  cout << "How much do you want to put on the card: ";
  cin >> cash;
  cards[cardsnumber - 1] += cash;
  for (int i = 0; i < 10; i++)
  {
    cout << "card number" << i + 1 << ": " << cards[i] << endl;
    sum += cards[i];
  }
  return sum;
}
void Asknumbers()
{
  int cards[10]{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  int cardsnumber, sum;
  while (true)
  {
    sum = 0;
    cout << "Enter card number: ";
    cin >> cardsnumber;
    if (cardsnumber > 0 and cardsnumber <= 10)
    {
      int sobachki = inputinCards(cards, cardsnumber, sum);
      cout << "Sum on all cards: " << sobachki << endl;
    }
    else
    {
      cout << "Error: Card number not found" << endl;
    }
  }
}

int main()
{
  Asknumbers();
}
