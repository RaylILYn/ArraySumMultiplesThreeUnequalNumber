#include <iostream>
using namespace std;
const int SIZE = 100;

int main()
{
	setlocale(LC_ALL, "ru");
	int x[SIZE];
	int n, F, j = 0, sum = 0;

	cout << "Введите размер массива (макс.100): " << endl;
	cin >> n;
	cout << endl << "Введите элементы массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	cout << endl;
	cout << "Введите число F: " << endl;
	cin >> F;
	for (int i = 2; i < n; i += 3)
	{
		if (F == x[i])
		{
			return;
		}
		else
		{
			sum += x[i];
		}

	}
	cout << "Сумма элементов массива стоящих  на местах кратных 3 и неравных F: " << sum << endl << endl;
	system("pause");
}