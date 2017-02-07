#include<iostream>

using namespace std;

struct zpdw
{
       char imie[20];
       char stanowisko[20];
       char pseudonim[20];
       int preferencje;
};

int main()
{
    zpdw tab[5];
    int spr=0, liczbaOsob=0, exit=0;
    char znak;
    
    cout << "Podaj liczbe osob: " << endl;
    cin >> liczbaOsob;
    
    for(int i=0; i<liczbaOsob; i++)
    {
            cout << endl;
            cout << "Podaj imie " << i+1 << " czlonka" << endl;
            cin >> tab[i].imie;
            cout << endl;
            
            cout << "Podaj stanowisko " << i+1 << " czlonka" << endl;
            cin >> tab[i].stanowisko;
            cout << endl;
            
            cout << "Podaj pseudonim " << i+1 << " czlonka" << endl;
            cin >> tab[i].pseudonim;
            cout << endl;
            
            cout << "Preferencje wyswietlania " << i+1 << " czlonka (0,1 lub 2)" << endl;
            cin >> tab[i].preferencje;
            cout << endl;
    }
    
    while(exit != 1)
    {
               cout << "Wybierz opcje:" << endl;
               cout << "a. lista wg imion" << "      " << "b. lista wg stanowisk" << endl;
               cout << "c. lista wg pseudonimow" << "" << "d. lista wg preferencjii" << endl;
               cout << "q. koniec" << endl;
               cout << endl;
    
               cin >> znak;
    
               while(spr!=1)
               {
                            switch(znak)
                            {
                         
                                        case 'a':
                                        cout << "Wyswietlanie wg imion:" << endl;
                                        for(int i=0; i<liczbaOsob; i++)
                                        {
                                                cout << i+1 << " " << tab[i].imie << endl << endl;
                                        }
                                        spr=1;
                                        break;
                         
                                        case 'b':
                                        cout << "Wyswietlanie wg stanowisk:" << endl;
                                        for(int i=0; i<liczbaOsob; i++)
                                        {
                                                cout << i+1 << " " << tab[i].stanowisko << endl << endl;
                                        }
                                        spr=1;
                                        break;
                         
                                        case 'c':
                                        cout << "Wyswietlanie wg pseudonimow:" << endl;
                                        for(int i=0; i<liczbaOsob; i++)
                                        {
                                                cout << i+1 << " " << tab[i].pseudonim << endl << endl;
                                        }
                                        spr=1;
                                        break;
                         
                                        case 'd':
                                        cout << "Wyswietlanie wg indywidualnych preferencjii:" << endl;
                                        for(int i=0; i<liczbaOsob; i++)
                                        {
                                                switch(tab[i].preferencje)
                                                {
                                                           case 0:
                                                           cout << "Preferencja " << i+1 << " uzytkownika - Imie:" << endl;
                                                           cout << tab[i].imie << endl << endl;
                                                           break;
                                      
                                                           case 1:
                                                           cout << "Preferencja " << i+1 << " uzytkownika - Stanowisko:" << endl;
                                                           cout << tab[i].stanowisko << endl << endl;
                                                           break;
                                      
                                                           case 2:
                                                           cout << "Preferencja " << i+1 << " uzytkownika - Pseudonim:" << endl;
                                                           cout << tab[i].pseudonim << endl << endl;
                                                           break;
                                                }
                                      }
                                      spr=1;
                                      break;
                         
                                      case 'q':
                                      spr=1;
                                      exit=1;
                                      break;
                         
                                      default:
                                      cout << "Nie ma takiej opcjii!" << endl << endl;
                                      cin >> znak;
                                      break;
    
                              }
    
                 }
                 spr=0;
      }
    
    system("pause");
    return 0;
}
