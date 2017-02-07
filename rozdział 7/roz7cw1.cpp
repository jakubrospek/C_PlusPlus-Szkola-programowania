#include<iostream>

using namespace std;

struct liczby
{
       float a;
       float b;
};

float SredniaHarm(float a, float b)
{
      return (2.0*a*b)/(a+b);
}

int main()
{
    int i=0;
    float wynik;
    liczby tab[50];
    
    cout << "Podawaj pary liczb: " << endl;
    
    while(true)
    {
                      
                      
                      cin >> tab[i].a >> tab[i].b;
                      if(tab[i].a!=0 && tab[i].b!=0)
                      i++;
                      else
                      break;
    }
    cout << endl;
    i=0;
    
    while(tab[i].a!=0 && tab[i].b!=0)
    {
                      wynik = SredniaHarm(tab[i].a, tab[i].b);
                      cout << "Srednia harmoniczna " << i+1 << " pary: " << wynik << endl;
                      i++;
    }
    
    system("pause");
    return 0;
}
