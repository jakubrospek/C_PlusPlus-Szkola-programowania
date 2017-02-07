#include<iostream>
using namespace std;
#include "klasa.h"

int main()
{
    cout << "Konstruktor:" << endl;
    Rach_bank ob1("Jakub Rospek", "12345678910", 30000);
    ob1.Show();
    
    cout << "Metoda 'Depozyt':" << endl;
    ob1.Depozyt(100.50);
    ob1.Show();
    
    cout << "Metoda 'Wydaj':" << endl;
    ob1.Wydaj(0.50);
    ob1.Show();
    
    system("pause");
    return 0;
}
