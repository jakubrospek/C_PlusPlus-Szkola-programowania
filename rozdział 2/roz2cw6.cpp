#include<iostream>

using namespace std;

float j_astronomiczne(float swietlne)
{
      double j_astronomiczne;
      j_astronomiczne = swietlne * 63240;
      
      return j_astronomiczne;
}

int main()
{
    float swietlne;
    
    cout << "Podaj liczbe lat swietlnych: ";
    cin >> swietlne;
    
    cout << swietlne << " lat swietlnych = " << j_astronomiczne(swietlne) << " jednostek astronomicznych." << endl;
    cout << endl;
    
    system("pause");
    return 0;
}
