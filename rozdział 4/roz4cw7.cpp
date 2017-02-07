#include<iostream>

using namespace std;

struct pizza
{
       string firma;
       float srednica;
       float waga;
};

int main()
{
    pizza p1;
    
    cout << "Podaj nazwe firmy: ";
    cin >> p1.firma;
    cout << "Srednica pizzy: ";
    cin >> p1.srednica;
    cout << "Waga pizzy: ";
    cin >> p1.waga;
    
    cout << p1.firma << endl;
    cout << p1.srednica << endl;
    cout << p1.waga << endl;
    
    system("pause");
    return 0;
}
