#include <iostream>

using namespace std;

int main()
{
  char mysting[100];
  int lenght = 0;
  int word;
  int maxlenght = 0;
  int index = 0;
  cout << "Enter your line: ";
  cin.getline(mysting, 100);

  while (mysting[index] != 0)
  {
    if (mysting[index] >= 'a' && mysting[index] <= 'z' || mysting[index] >= 'A' && mysting[index] <= 'Z')
    {
      lenght++;
    }
    else
    {
      if (lenght > maxlenght)
      {
        maxlenght = lenght;
        word = index - maxlenght;
      }
      lenght = 0;
    }
    if (mysting[index + 1] == 0)
    {
      if (lenght > maxlenght)
      {
        maxlenght = lenght;
        word = index - maxlenght + 1;
      }
    }
    index++;
  }
  cout << "The largest word is: ";
  for (int i = 0; i < maxlenght; i++)
  {
    cout << mysting[word];
    word++;
  }
}
