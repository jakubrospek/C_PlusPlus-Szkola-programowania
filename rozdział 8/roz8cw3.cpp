#include<iostream>
//#include<cctype>
//#include<cstring>

using namespace std;

void funkcja(string & parametr);

int main()
{
    string lancuch="";
    
    while(true)
    {
    
    cout << "Podaj lancuch (q, aby skonczyc)" << endl;
    getline(cin, lancuch);
    
    if(lancuch=="q")
    {
                    break;
    }
    
    funkcja(lancuch);
    
    cout << lancuch << endl;
}
    
    system("pause");
    return 0;
}

void funkcja(string & parametr)
{
     int i = 0;
     char znak;
     
     while(parametr[i])
     {
                       znak = parametr[i];
                       parametr[i] = toupper(znak);
                       i++;
     }
}
