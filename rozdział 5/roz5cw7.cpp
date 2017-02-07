#include<iostream>
#include<string>

using namespace std;

struct car
{
       string marka;
       int rok_budowy;
};

int main()
{
    int ile_aut;
    
    cout << "Podaj liczbe aut: ";
    cin >> ile_aut;
    
    car * tab = new car[ile_aut];
    
    for(int i=0; i<ile_aut; i++)
    {
            cout << "Samochod #" << i+1 << ":" << endl;
            cout << "\tMarka: ";
            cin.sync();
            getline(cin, tab[i].marka);
            cout << "\tRok produkcji: ";
            cin >> tab[i].rok_budowy;
    }
    
    cout << endl;
    
    for(int i=0; i<ile_aut; i++)
    {
            cout << tab[i].rok_budowy << " " << tab[i].marka << endl;
    }
    
    system("pause");
    return 0;
}
