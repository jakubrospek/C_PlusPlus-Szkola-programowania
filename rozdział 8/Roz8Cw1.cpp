#include<iostream>
#include<string>

using namespace std;

struct struktura
{
       string lancuch;
       int ilosc;
};

struktura & funkcja(struktura &lancuch);
struktura & funkcja(struktura &lancuch, int parametr);

int main()
{
    struktura ob1 = {"lancuch",0};
    
    
    funkcja(ob1);
    funkcja(ob1);
    funkcja(ob1,1);
    funkcja(ob1,0);
    funkcja(ob1,1);
    
    system("pause");
    return 0;
}

struktura & funkcja(struktura &lancuch)
{
     cout << lancuch.lancuch << endl;
     lancuch.ilosc++;
}

struktura & funkcja(struktura &lancuch, int parametr)
{
          
          //cout << lancuch.lancuch << endl;
          if(parametr!=0)
          {
          
          cout << "Wyswietlone " << lancuch.ilosc << " razy" << endl;
          
          }
          else
          {
              cout << lancuch.lancuch << endl;
              lancuch.ilosc++;
          }
     
}
