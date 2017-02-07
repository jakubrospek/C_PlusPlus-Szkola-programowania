#include<iostream>

using namespace std;

void wprowadzanie(float tab[])
{
     for(int i=0; i<10; i++)
     {
             cin >> tab[i];
             if(tab[i] == 'q')
             {
                       break;
             }
     }
}

void wyswietl(float tab[])
{
     for(int i=0; i<10; i++)
     {
             if(tab[i]!=0)
             {
                 cout << tab[i] << " ";
             }
     }
}

void srednia(float tab[])
{
     float srednia;
     int licznik;
     for(int i=0; i<10; i++)
     {
             if(tab[i]!=0)
             {
                 srednia += tab[i];
                 licznik++;
             }
     }
     srednia = srednia / licznik;
     
     cout << "Srednia wynikow: " << srednia << endl;
}

int main()
{
    float wyniki[10] = {0};
    
    cout << "Podaj wyniki (max. 10, q - konczy wprowadzanie):" << endl;
    wprowadzanie(wyniki);
    
    wyswietl(wyniki);
    cout << endl;
    
    srednia(wyniki);
    
    system("pause");
    return 0;
}
