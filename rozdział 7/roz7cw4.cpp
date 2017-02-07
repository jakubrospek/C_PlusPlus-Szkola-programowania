#include<iostream>

using namespace std;

long double probability(unsigned numbers, unsigned picks)
{
     long double result = 1.0;
     long double n;
     unsigned p;
     
     for(n=numbers, p=picks; p>0; n--, p--)
     result = result * n / p;
     
     return result;   
}

int main()
{
    double total, choices;
    
    cout << "Podaj najwieksza liczbe jaka mozna wybrac, oraz liczbe skreslen:\n";
    
    while((cin >> total >> choices) && choices <= total)
    {
               cout << "Szansa wygranej to jeden do " << probability(total, choices) << "\n";
               cout << "Nastepne dwie liczby (q aby zakonczyc): ";
    }
    cout << "do widzenia\n";
    
    
    system("pause");
    return 0;
}
