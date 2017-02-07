#include<iostream>
#include<string>

using namespace std;

const int SLEN = 30;

struct student
{
       char fullname[SLEN];
       char hobby[SLEN];
       int ooplevel;
};

int getinfo(student pa[], int n)
{
    int spr=0, licznik=0, z=0;
    for(int i=0; i<n; i++)
    {
              cout << "Imie i nazwisko: " << endl;
            cin.getline(pa[i].fullname,SLEN);
            
            if(strchr(pa[i].fullname, ' '))
            {
                                      cout << "hobby?:" << endl;
                                      cin.getline(pa[i].hobby,SLEN);
                                      licznik++;
            }
            else
            {
                cout << "Nie wpisales nazwiska! Wprowadzanie zakonczone" << endl;
                break;
            }
            
    }
    return licznik;
}

void display1(student tab)
{
     cout << tab.fullname << endl;
     cout << tab.hobby << endl;
}

void display2(const student * tab)
{
     cout << tab->fullname << endl;
     cout << tab->hobby << endl;
}

void display3(const student tab[], int n)
{
     for(int i=0; i<n; i++)
     {
     cout << tab[i].fullname << endl;
     cout << tab[i].hobby << endl;
     }
}

int main()
{
    int class_size;
    
    cout << "Podaj wielkosc grupy: " << endl;
    cin >> class_size;
    cout << "\n";
    while(cin.get() != '\n')
    continue;
    
    
    
    student * tab = new student[class_size];
    int entered = getinfo(tab, class_size);
    for(int i=0; i < entered; i++)
    {
            display1(tab[i]);
            display2(&tab[i]);
    }
    //display3(tab, entered);
    delete [] tab;
    
    
    cout << "Gotowe\n" << endl;
    
    system("pause");
    return 0;
}
