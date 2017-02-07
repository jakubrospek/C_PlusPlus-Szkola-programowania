#include<iostream>
const int Max = 5;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int *n);
void revalue(double *r, double ar[], int *n);


int main()
{
	using namespace std;
	double properties[Max];

	int size = fill_array(properties, Max);
	show_array(properties, &size);
	if (size > 0)
	{
		cout << "Podaj czynnik zmiany wartosci ";
		double factor;

		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Niepoprawna wartoœæ; podaj liczbê: ";
		}
		revalue(&factor, properties, &size);
		show_array(properties, &size);
	}
	cout << "Gotowe.\n";

	system("pause");
	return 0;
}


int fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i;
	

	for (i = 0; i < limit; i++)
	{
		cout << "Podaj wartosc nr " << (i + 1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "B³êdne dane; wprowadzanie danych przerwane.\n";
			break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}

	int *wsk_i = &i;

	return *wsk_i;
}

void show_array(const double ar[], int *n)
{
	using namespace std;
	for (int i = 0; i < *n; i++)
	{
		cout << "Nieruchomoœæ nr " << (i + 1) << ": ";
		cout << ar[i] << endl;
	}
}

void revalue(double *r, double ar[], int *n)
{
	for (int i = 0; i < *n; i++)
	{
		ar[i] *= *r;
	}
}