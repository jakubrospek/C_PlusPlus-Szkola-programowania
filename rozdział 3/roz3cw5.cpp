#include<iostream>

using namespace std;

int main()
{
    long double ludnosc_swiata;
    long double ludnosc_polski;
    long double procent, wynik;
    
    cout << "Podaj liczbe ludnosci swiata: ";
    cin >> ludnosc_swiata;
    cout << "Podaj liczbe ludnosci Polski: ";
    cin >> ludnosc_polski;
    
    procent = ludnosc_polski * 100;
    wynik = procent / ludnosc_swiata;
    
    cout << "Populacja Polski stanowi " << wynik << "% populacji swiata." << endl;
    
    system("pause");
    return 0;
}
