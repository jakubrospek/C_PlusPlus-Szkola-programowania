#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char imie[10];
    char nazwisko[10];
    
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    
    strcat(nazwisko, ", ");
    strcat(nazwisko, imie);
    
    cout << "Oto informacje zestawione w jeden napis: " << nazwisko << endl;
    
    system("pause");
    return 0;
}
