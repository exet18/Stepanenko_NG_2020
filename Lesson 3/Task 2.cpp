#include <iostream>

using namespace std;

int main()
{
    char mysting[100];
    int b = 0,
    int word;
    int c = 0;
    int i = 0;
    cout << "Enter your line: ";
    cin.getline(mysting, 100);

    while (mysting[i] != 0)
    {
        if (mysting[i] >= 'a' && mysting[i] <= 'z' || mysting[i] >= 'A' && mysting[i] <= 'Z')
        {
            b++;
        }
        else
        {
            if (b > c)
            {
                c = b;
                word = i - c;
            }
            b = 0;
        }
        if (mysting[i + 1] == 0)
        {
            if (b > c)
            {
                c = b;
                word = i - c + 1;
            }
        }
        i++;
    }
    cout << "The largest word is: ";
    for (int i = 0; i < c; i++)
    {
        cout << mysting[word];
        word++;
    }
}
