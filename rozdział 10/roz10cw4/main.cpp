#include<iostream>
#include<algorithm>
#include "przestrzen.h"

using namespace std;

const int ROZMIAR = 5;

int main()
{
    double tab[ROZMIAR] = {2.0, 3.4, 4.11, 2.5, 2.2};
    using namespace SALES;
    
    Sales ob1(tab, ROZMIAR);
    Sales ob2;
    Sales ob3;
    
    ob2.setSales2(tab, ROZMIAR);
    ob3.setSales2();
    
    cout << "Wartosci statyczne: " << endl;
    for(int i=0; i<ROZMIAR; i++)
    {
            cout << tab[i] << " ";
    }
    cout << "\n";
    
    cout << endl;
    cout << "Funkcja setSales1 (wersja statyczna): " << endl;
    ob1.showSales();
    cout << endl;
    cout << "Funkcja setSales2 (statyczna, kopiowanie tablicy do struktury): " << endl;
    ob2.showSales();
    cout << endl;
    cout << "Funkcja setSales2 (wersja dynamiczna): " << endl;
    ob3.showSales();
    
    system("pause");
    return 0;
}
