#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstdlib>

using namespace std;

struct sponsorzy
{
       string nazwisko;
       double kwota;
       string kwotaBuf;
};

int main()
{
    int ilosc, spr=0;
    ifstream File;
    File.open("roz6cw9.txt");
    
    //cout << "Podaj liczbe wplacajacych: " << endl;
    File >> ilosc;
    
    sponsorzy * tab = new sponsorzy[ilosc];
    
    
    
    for(int i=0; i<ilosc; i++)
    {
            //cout << endl;
            //cout << "Nazwisko " << i+1 << " donatora (p - pomin)" << endl;
            File >> tab[i].nazwisko;
            //cout << "Kwota jaka wplacil:" << endl;
            File >> tab[i].kwotaBuf;
             
            tab[i].kwota = atof(tab[i].kwotaBuf.c_str());
            
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
