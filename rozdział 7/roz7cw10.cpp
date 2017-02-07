#include<iostream>

using namespace std;

struct para_liczb
{
       double s_x;
       double s_y;
};

double add(double x, double y)
{
       return x + y;
}

double multiply(double x, double y)
{
       return x * y;
}

double division(double x, double y)
{
       return x / y;
}

double calculate(double xx, double yy, double (*pf)(double, double))        //(*pf) wskaŸnik na funkcjê
{
       return pf(xx, yy);
}

int main()
{   
    para_liczb tab[3];
    
    double (*pf[3])(double, double);                        // tablica wskaŸników na funkcjê
    pf[0] = add;
    pf[1] = multiply;
    pf[2] = division;
    
    cout << "Podaj pary liczb: " << endl;
    
    for(int i=0; i<3; i++)
    {
            cin >> tab[i].s_x >> tab[i].s_y;
            
    }
    
    cout << endl;
    
    for(int i=0; i<3; i++)
    {
            for(int j=0; j<3; j++)
            {
                    if(j==0)
                    {
                            cout << "Dodawanie: " << endl;
                    }
                    else if(j==1)
                    {
                         cout << "Mnozenie: " << endl;
                    }
                    else
                    {
                        cout << "Dzielenie: " << endl;
                    }
                    cout << calculate(tab[i].s_x, tab[i].s_y, pf[j]) << endl;
            }
            cout << endl;
    }
    
    
    system("pause");
    return 0;
}
