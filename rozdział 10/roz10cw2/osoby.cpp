#include<iostream>
#include<string>
using namespace std;
#include "klasa.h"

int main()
{
    Person ob1;
    Person ob2("Staszek");
    Person ob3("Jacek","Placek");
    
    cout << endl;
    ob1.Show();
    cout << endl;
    ob1.FormalShow();
    
    cout << endl;
    ob2.Show();
    cout << endl;
    ob2.FormalShow();
    
    cout << endl;
    ob3.Show();
    cout << endl;
    ob3.FormalShow();
    
    system("pause");
    return 0;
}
