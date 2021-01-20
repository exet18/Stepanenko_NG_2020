#include <iostream>
using namespace std;
void result(int words = 0)
{
  cout << "Result: " << words;
}
void programm(char mystring[255])
{
  int i = 0;
  int words = 0;
  int counter = 0;

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
  result(words);
}

int inputArray()
{
  char mystring[255];
  cout << "Enter string: ";
  cin.getline(mystring, 255);
  programm(mystring);
}

int main()
{
  inputArray();
}
