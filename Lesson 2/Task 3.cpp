
#include <iostream>

using namespace std;

int main()
{
  int maxValue = 0;
  int arraysize = 1;
  int numbers[arraysize];
  int zero = 1;
  int i = 0;

  while (zero != 0)
  {
    cout << "Enter number: ";
    cin >> zero;
    numbers[i] = zero;
    arraysize++;
    i++;
  }
  for (int i = 0; i < arraysize; i++)
  {
    if (numbers[i] > maxValue)
      maxValue = numbers[i];
  }

  for (int i = 0; i < arraysize - 1; i++)
  {
    for (int j = 0; j < maxValue - numbers[i] / 2; j++)
    {
      cout << " ";
    }
    for (int k = 0; k < numbers[i]; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
