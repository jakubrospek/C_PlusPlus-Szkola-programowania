#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double zmienna1=0, zmienna2=0, zmienna3=0, podatek=0, dochod;
    
    cout << "Podaj dochod: " << endl;
    cin >> dochod;
    
    if(dochod == abs(dochod) && dochod/dochod == 1)
    {
              if(dochod > 35000)
              {
                        zmienna1 = 10000 * 0.10;
                        zmienna2 = 20000 * 0.15;
                        zmienna3 = (dochod - 35000)*0.20;
              
                       podatek = zmienna1 + zmienna2 + zmienna3;
              }
              else if(dochod == 35000)
              {
                   zmienna1 = 10000 * 0.10;
                   zmienna2 = 20000 * 0.15;
         
                   podatek = zmienna1 + zmienna2;
              }
              else
              {
                  while(zmienna1 < dochod)
                  {
                               zmienna1 += 5000;
                               if(zmienna1 == 10000)
                               {
                                           zmienna2 = zmienna1 * 0.10;
                               }
                               else if(zmienna1 - 10000 == 20000)
                               {
                                    zmienna3 = zmienna1 * 0.15;
                               }
                               
                               podatek = zmienna2 + zmienna3;
                  }
              }
    
              cout << "Twoj dochod wynosi: " << dochod << " twarpow." << endl;
              cout << "Musisz zaplacic podatek w wysokosci: " << podatek << " twarpow." << endl;
    }
    else
    cout << "Wprowadzona wartosc nie jest liczba lub jest ujemna!" << endl;
    
    system("pause");
    return 0;
}
