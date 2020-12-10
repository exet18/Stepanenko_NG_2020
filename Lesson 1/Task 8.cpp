#include<iostream>
using namespace std;

int main()
{
	int treesize;

	cout << "enter tree size: ";
	cin >> treesize;
	for (int tree = 0; tree <= treesize; tree++)
	{
		for (int space = 0; space < treesize - tree; space++)
		{
			cout << " ";
		}
		for (int space = treesize - 2 * tree; space <= treesize; space++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int space1 = 0; space1 < treesize; space1++) 
	{
		cout << " ";
	}
	cout << "*";
}