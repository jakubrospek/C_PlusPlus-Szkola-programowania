#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

class klasa1
{
      public:
      int wartosc;
      string slowo;
      
      public:
      klasa1(){}
             
      klasa1(int w)
      {
             wartosc = w;
      }
      
      klasa1(int w, string slow)
      {
             wartosc = w;
             slowo = slow;
      }  
};

int dodaj(int *a)  // argument przekazywany przez wskaŸnik - operacja wykonywana na oryginale w main()
{
   *a = *a+1;
   
   
}

int dodaj2(int a2) // argument przekazywany przez wartosæ - operacja wykonywana na kopii argumentu w dodaj2()
{
   a2 = a2+1;
   
   return a2;
}

int dodaj3(int &a2) // argument przekazywany przez referencjê - operacja wykonywana na oryginale w main()
{
   a2 = a2+1;
   
   
}

int tablica(int tab[])
{
    cout << "Zaawartosc tablicy tab:" << endl;
    for(int i=0; i<3; i++)
    {
            cout << tab[i] << " ";
    }
    
}

int tablica2(int tab2[3][3])
{
    cout << "Zaawartosc tablicy tab2:" << endl;
    for(int i=0; i<3; i++)
    {
            for(int j=0; j<3; j++)
            {
                    cout << tab2[i][j] << " ";
            }
    }
    
    
}

int main()
{
    /*
    klasa1 obiekt(5);
    
    cout << obiekt.wartosc << endl;
    
    klasa1 obiekt2(5, "kuba");
    
    cout << obiekt2.wartosc << " " << obiekt2.slowo << endl;
    
    klasa1 obiekt3;
    */
    
    /*
    int w = 5;
    int * wsk;
    
    wsk = &w;    // lub *wsk = w; - to to samo
    int * w2 = &w;
    

    
    cout << *wsk << "        '*wsk' wyswietla wskazywana wartosc 'w'" << endl;
    cout << wsk << " 'wsk' wyswietla adres wskazywanej wartosci 'w'" << endl;
    cout << w << "        wyswietla wartosc 'w'" << endl;
    
    cout << endl;
    *wsk = 3;
    cout << "Zmiana: *wsk = 3 " << endl;
    cout << endl;
    
    cout << *w2 << "        '*w2' wyswietla wskazywana wartosc 'w'" << endl;
    cout << w2 << " 'w2' wyswietla adres wskazywanej wartosci 'w'" << endl;
    cout << w << "        wyswietla wartosc 'w'" << endl;
    
    cout << endl;
    *w2 = 1;
    cout << "Ponowna zmiana: *w2 = 1 " << endl;
    cout << endl;
    
    cout << *wsk << "        '*wsk' wyswietla wskazywana wartosc 'w'" << endl;
    cout << wsk << " 'wsk' wyswietla adres wskazywanej wartosci 'w'" << endl;
    cout << w << "        wyswietla wartosc 'w'" << endl;
    cout << endl;
    
    int * wskaznik;
    int c = 12;
    wskaznik = &c;
    
    cout << *wskaznik << endl;
    cout << sizeof(wskaznik) << endl;
    */
    
    int a = 5;
    int a2 = 5;
    int a3 = 5;
    int tab[3] = {1,2,3};
    int tab2[3][3] = {1,2,3,4,5,6,7,8,9};
    
    int * wsk = &a;
    dodaj(wsk);   // lub 'dodaj(&a);' bez koniecznoœci deklarowania wskaŸnika 'int * wsk = &a;'
    
    dodaj2(a2);   // tutaj funkcja operuje na kopii zmiennej a2 wiêc w funkcjii main() a2 pozostaje bez zmian
    
    dodaj3(a3);
    
    cout << a << endl;
    cout << a2 << endl;
    cout << a3 << endl << endl;
    
    a2 = dodaj2(a2); // dopiero po przypisaniu zwracanej wartoœci przez funkcjê do a2 w main() widaæ zmiany
    
    cout << a2 << endl;
    
    tablica(tab);
    cout << endl;
    tablica2(tab2);
    cout << endl;
    
    system("pause");
    return 0;
}
