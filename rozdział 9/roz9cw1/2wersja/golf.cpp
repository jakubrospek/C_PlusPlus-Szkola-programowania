

#include<iostream>
#include "golf.h"

using namespace std;

void setgolf(golf & g, const char * name, int hc)
{
     int i=0;
     while(name[i]!='\0')
     {
     g.fullname[i] = name[i];
     i++;
     }
     g.handicap = hc;
}

int setgolf(golf & g)
{
     
     cout << "Podaj nazwisko: (q - pomin)" << endl;
     cin >> g.fullname;
     if(g.fullname[0] == 'q')
     {
                      strcpy(g.fullname,"pominieto");
                      g.spr = 1;
                      cout << endl;
                      return 0;
     }
     cout << "Podaj wartosc handicap:" << endl;
     cin >> g.handicap;
     cout << endl;
     
}

void handicap(golf & g, int hc)
{
     g.handicap = hc;
     strcpy(g.fullname,"brak danych");
}

void showgolf(const golf & g)
{
     cout << "Nazwisko: " << g.fullname << endl;
     cout << "hc: " << g.handicap << endl;
}

