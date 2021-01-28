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
  for (int sorte = 0; sorte < arraysize; sorte++)
  {
    if (numbers[i] > maxValue)
      maxValue = numbers[i];
  }

  for (int freespace_i = 0; freespace_i < arraysize - 1; freespace_i++)
  {
    for (int freespace = 0; freespace < maxValue - numbers[i] / 2; freespace++)
    {
      cout << " ";
    }
    for (int stars = 0; stars < numbers[i]; stars++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
