#include<iostream>
#include<cstring>

using namespace std;

struct stringy
{
       char * str;
       int ct;
};

stringy & show(stringy & parametr1, int parametr2 = 1);
char * show(char * parametr1, int parametr2 = 1);
void set(stringy & parametr1, char * parametr2);

void set2(stringy & parametr1, char * parametr2);

int main()
{
    stringy beany;
    char testing[] = "Rzeczywistosc to juz nie to co kiedys.";   
    
    set2(beany, testing);
    show(beany);
    show(beany,2);
    
    testing[0] = 'D';
    testing[1] = 'u';
    
    show(testing);
    show(testing,3);
    show("Gotowe!");
    
    system("pause");
    return 0;
}

void set(stringy & parametr1, char * parametr2)
{
     parametr1.str = parametr2;
     parametr1.ct = strlen(parametr2);
}

void set2(stringy & parametr1, char * parametr2)
{
     parametr1.ct = strlen(parametr2);
     parametr1.str = new char[parametr1.ct];
     strcpy(parametr1.str, parametr2);
     
     
}

stringy & show(stringy & parametr1, int parametr2)
{
        if(parametr2 == 1)
        {
                     cout << parametr1.str << endl;
        }
        else
        {
            for(int i=0; i<parametr2; i++)
            {
                    cout << parametr1.str << endl;
            }
        }
}

char * show(char * parametr1, int parametr2)
{
     if(parametr2 == 1)
        {
                     cout << parametr1 << endl;
        }
        else
        {
            for(int i=0; i<parametr2; i++)
            {
                    cout << parametr1 << endl;
            }
        }
}
