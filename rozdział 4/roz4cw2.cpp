#include<iostream>

using namespace std;

int main()
{
    string imie1, imie2;
    string nazwisko;
    int ocena, wiek;
    
    cout << "Jak masz na imie? ";
    cin >> imie1;
    cin >> imie2;
    cout << "Jak sie nazywasz? ";
    cin >> nazwisko;
    cout << "Na jaka ocene zaslugujesz? ";
    cin >> ocena;
    cout << "Ile masz lat? ";
    cin >> wiek;
    
    cout << "Nazwisko: " << nazwisko << ", " << imie1 << " " << imie2 << endl;
    cout << "Ocena: " << ocena-1 << endl;
    cout << "Wiek: " << wiek << endl;
    
    
    system("pause");
    return 0;
}
