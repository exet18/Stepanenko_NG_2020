
#include <iostream>

using namespace std;

int main()
{
  char text[100];
  cout << "Enter ur string: ";
  cin >> text;
  for (int i = 0; i < text[i]; i++)
  {
    if (text[i] > 90)
    {
      text[i] = text[i] - 32;
    }
  }
  cout << text << endl;
}
