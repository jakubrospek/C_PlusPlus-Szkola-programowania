
#include <cstdlib>
#include <iostream>
#include <string.h>
#include "golf.h"
#include "golf.cpp"


using namespace std;

int main()
{
    
    
    golf ob1 =                        // coœ w stylu konstruktora
    {
       "",0,0
       
    };

    golf ob2[3] =                        // coœ w stylu konstruktora
    {
       "",0,0
       
    };


    golf ob3 =                        // coœ w stylu konstruktora
    {
       "",0,0
       
    };
    
    char tab[]="Rospek";
    setgolf(ob1, tab, 5);
    for(int i=0; i<3; i++)
    {
            setgolf(ob2[i]);
            if(ob2[i].spr == 1)
            {
                               break;
            }
    }
    handicap(ob3,6);
    
    cout << "setgolf1:" << endl;
    showgolf(ob1);
    cout << endl;
    cout << "setgolf2:" << endl;
    for(int i=0; i<3; i++)
    {
    showgolf(ob2[i]);
    }
    cout << endl;
    cout << "handicap:" << endl;
    showgolf(ob3);
    cout << endl;
    
    
    system("PAUSE");
    return 0;
}
