#include<iostream>
#include<algorithm>
#include "przestrzen.h"
#include "definicje.h"

using namespace std;

const int ROZMIAR = 5;

int main()
{
    double tab[ROZMIAR] = {2.0, 3.4, 4.11, 2.5, 2.2};
    using namespace SALES;
    
    Sales ob1 = {0};
    Sales ob2 = {0};
    Sales ob3 = {0};
    
    setSales1(ob1, tab, ROZMIAR);
    setSales2(ob2, tab, ROZMIAR);
    setSales2(ob3);
    
    cout << "Wartosci statyczne: " << endl;
    for(int i=0; i<ROZMIAR; i++)
    {
            cout << tab[i] << " ";
    }
    cout << "\n";
    
    cout << endl;
    cout << "Funkcja setSales1 (wersja statyczna): " << endl;
    showSales(ob1);
    cout << endl;
    cout << "Funkcja setSales2 (statyczna, kopiowanie tablicy do struktury): " << endl;
    showSales(ob2);
    cout << endl;
    cout << "Funkcja setSales2 (wersja dynamiczna): " << endl;
    showSales(ob3);
    
    system("pause");
    return 0;
}
