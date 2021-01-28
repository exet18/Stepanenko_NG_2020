#include <iostream>

using namespace std;

int main()
{
  char mysting[100];
  int length = 0;
  int word;
  int maxlength = 0;
  int index = 0;
  cout << "Enter your line: ";
  cin.getline(mysting, 100);

  while (mysting[index] != 0)
  {
    if (mysting[index] >= 'a' && mysting[index] <= 'z' || mysting[index] >= 'A' && mysting[index] <= 'Z')
    {
      length++;
    }
    else
    {
      if (length > maxlength)
      {
        maxlength = length;
        word = index - maxlength;
      }
      length = 0;
    }
    if (mysting[index + 1] == 0)
    {
      if (length > maxlength)
      {
        maxlength = length;
        word = index - maxlength + 1;q
      }
    }
    index++;
  }
  cout << "The largest word is: ";
  for (int i = 0; i < maxlength; i++)
  {
    cout << mysting[word];
    word++;
  }
}
