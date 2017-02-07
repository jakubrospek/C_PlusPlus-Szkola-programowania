
//#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
#include "golf.h"

int main()
{
    
    
    //golf ob1("",0,0);
    golf ob2[3];
    golf ob3("",0,0);
    golf ob4(ob4);
    
    char tab[]="Rospek";
    golf ob1(tab, 5, 0);
    for(int i=0; i<3; i++)
    {
           //ob2[i].setgolf();          // tutaj nastepuje inicjalizacja tablicy obiektów ob2 za pomoc¹ funkcjii int setgolf()
            if(ob2[i].check() == 1)
            {
                               break;
            }
    }
    ob3.hcp(6);
    
    cout << "setgolf1:" << endl;
    ob1.showgolf();
    cout << endl;
    cout << "setgolf2:" << endl;
    for(int i=0; i<3; i++)
    {
    ob2[i].showgolf();
    }
    cout << "setgolf4:" << endl;
    ob4.showgolf();
    cout << endl;
    cout << "handicap:" << endl;
    ob3.showgolf();
    cout << endl;
    
    
    system("PAUSE");
    return 0;
}
