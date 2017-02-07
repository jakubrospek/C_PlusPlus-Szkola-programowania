#include<iostream>
#include<conio.h>

using namespace std;

struct sponsorzy
{
       string nazwisko;
       double kwota;
};

int main()
{
    int ilosc, spr=0;
    
    cout << "Podaj liczbe wplacajacych: " << endl;
    cin >> ilosc;
    
    sponsorzy * tab = new sponsorzy[ilosc];
    
    
    
    for(int i=0; i<ilosc; i++)
    {
            cout << endl;
            cout << "Nazwisko " << i+1 << " donatora (p - pomin)" << endl;
            cin >> tab[i].nazwisko;
            cout << "Kwota jaka wplacil:" << endl;
            cin >> tab[i].kwota;
            
             if(tab[i].kwota >= 10000)
             {
                             spr=1;
             }
    }
    
    if(spr == 1)
    {
           cout << endl;
           cout << "Nasi WSPANIALI sponsorzy: " << endl;
    }
    
    for(int i=0; i<ilosc; i++)
    {
            if(tab[i].kwota >= 10000)
            {
                            if(tab[i].nazwisko == "p")
                            {
                                               cout << "brak : " << tab[i].kwota << endl;
                            }
                            else
                            cout << tab[i].nazwisko << " : " << tab[i].kwota << endl;
            }
    }
    
    cout << endl;
    cout << "Nasi pozostali sponsorzy: " << endl;
    
    for(int i=0; i<ilosc; i++)
    {
            if(tab[i].kwota < 10000)
            {
                            if(tab[i].nazwisko == "p")
                            {
                               cout << "brak : " << tab[i].kwota << endl;
                            }
                            else
                            cout << tab[i].nazwisko << " : " << tab[i].kwota << endl;
            }
    }
    
    system("pause");
    return 0;
}
