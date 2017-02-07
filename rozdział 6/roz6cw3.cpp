#include<iostream>

using namespace std;

int main()
{
    char znak;
    int a;
    
    cout << "Wybierz opcje:" << endl;
    
    cout << "r) roslinozerca" << "       " << "p) pianista" << endl;
    cout << "d) drzewo" << "             " << "g) gra" << endl;
    
    
    /*
    while(znak!='r'||znak!='p'||znak!='d'||znak!='g')
    {
     cin >> znak;
     cout << "Prosze wybrac r, p, d lub g" << endl;
     
    }
    */
    cin >> znak;
while(a!=1)
{
           
    switch(znak)
    {
                case 'r':
                cout << "Slon" << endl;
                a=1;
                break;
                
                case 'p':
                cout << "Chopin" << endl;
                a=1;
                break;
                
                case 'd':
                cout << "Buk" << endl;
                a=1;
                break;
                
                case 'g':
                cout << "Wiedzmin" << endl;
                a=1;
                break;
                
                default:
                cout << "Prosze wybrac r, p, d lub g" << endl;
                cin >> znak;
                break;
    }
}
    
    
    system("pause");
    return 0;
}
