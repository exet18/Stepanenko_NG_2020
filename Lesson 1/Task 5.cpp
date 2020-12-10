#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;
	setlocale(LC_ALL, "Russian");
	cout << "Привет давай сыграем?" << endl;
	cout << "1. Давай." << endl;
	cout << "2. Не хочу." << endl;
	cin >> a;
	switch (a)
	{
	case 2:cout << "Ну как хочешь"; break;
	case 1:cout << "Возвращаясь с работы по дороге дамой ты увидел машину на обочине и мужика стоящего возле нее, походу он поламался." <<endl; 
		cout << "Твои действия:" << endl;
		cout << "1. Проехать мимо. " << endl;
		cout << "2. Остановиться помочь." << endl;
		cin >> b;
		break;
	default:
		cout << "Нет такого варианта ответа." << endl;
		break;
	}
	if (b != 0)
		switch (b)
		{
		case 1:cout << "Минус карма друг(." << endl; break;
		case 2:cout << "Ты помог незнакомому человеку и он дал тебе немного денег."; break;
		default:
			cout << "Нет такого варианта ответа." << endl;
			break;
		}
}
