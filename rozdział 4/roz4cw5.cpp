#include<iostream>

using namespace std;

struct Batonik
{
       string marka;
       float waga;
       int kalorie;
};

int main()
{
    
    Batonik snack;
    
    snack.marka = "Mocha Munch";
    snack.waga = 2.3;
    snack.kalorie = 350;
    
    cout << snack.marka << endl;
    cout << snack.waga << endl;
    cout << snack.kalorie << endl;
    
    system("pause");
    return 0;
}
