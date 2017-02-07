#include<iostream>

using namespace std;

float Fahrenheit(int celsjusz)
{
      float Fahrenheit;
      Fahrenheit = 1.8 * celsjusz + 32;
      
      return Fahrenheit;
}

int main()
{
    int celsjusz;
    
    cout << "Podaj temperature w stopniach celsjusza: ";
    cin >> celsjusz;
    
    cout << celsjusz << " stopnie Celsjusza to " << Fahrenheit(celsjusz) << " stopnie Fahrenheita." << endl;
    
    system("pause");
    return 0;
}
