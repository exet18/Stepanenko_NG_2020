#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;
	setlocale(LC_ALL, "Russian");
	cout << "������ ����� �������?" << endl;
	cout << "1. �����." << endl;
	cout << "2. �� ����." << endl;
	cin >> a;
	switch (a)
	{
	case 2:cout << "�� ��� ������"; break;
	case 1:cout << "����������� � ������ �� ������ ����� �� ������ ������ �� ������� � ������ �������� ����� ���, ������ �� ���������." <<endl; 
		cout << "���� ��������:" << endl;
		cout << "1. �������� ����. " << endl;
		cout << "2. ������������ ������." << endl;
		cin >> b;
		break;
	default:
		cout << "��� ������ �������� ������." << endl;
		break;
	}
	if (b != 0)
		switch (b)
		{
		case 1:cout << "����� ����� ����(." << endl; break;
		case 2:cout << "�� ����� ����������� �������� � �� ��� ���� ������� �����."; break;
		default:
			cout << "��� ������ �������� ������." << endl;
			break;
		}
}
