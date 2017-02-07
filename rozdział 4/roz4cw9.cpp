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
    
    Batonik * snack = new Batonik[3];
    
    snack[0].marka = "Mocha Munch";
    snack[0].waga = 2.3;
    snack[0].kalorie = 350;
    
    snack[1].marka = "Mars";
    snack[1].waga = 2.3;
    snack[1].kalorie = 350;
    
    snack[2].marka = "Snickers";
    snack[2].waga = 2.3;
    snack[2].kalorie = 350;
    
    cout << snack[0].marka << endl;
    cout << snack[0].waga << endl;
    cout << snack[0].kalorie << endl;
    
    cout << snack[1].marka << endl;
    cout << snack[1].waga << endl;
    cout << snack[1].kalorie << endl;
    
    cout << snack[2].marka << endl;
    cout << snack[2].waga << endl;
    cout << snack[2].kalorie << endl;
    
    system("pause");
    return 0;
}
