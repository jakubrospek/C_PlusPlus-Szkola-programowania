
#include <iostream>
#include<string>

using namespace std;

void strcount(const string & str);

string temp2;

int main()
{
    string input, temp;

    cout << "Wprowadz wiersz:\n";
    getline(cin,input);
    while(temp[0]!='q')
    {
               cout << "Wprowadz kolejny wiersz (q - koniec)" << endl;
               getline(cin,temp);
               if(temp[0]=='q'){}
               else
               {
                   temp2 = temp;
                   input+=temp;
               }
    }
    cout << "Koniec\n";
    
    
        strcount(input);
    
    
    system("pause");
    return 0;
}

void strcount(const string & str)
{
       int total = 0;
       if(temp2.length()!=0)
       {
           cout << "\"" << temp2 << "\" zawiera ";
           cout << temp2.length() << " znakow\n";
       }
       else
       {
           cout << "\"" << str << "\" zawiera ";
           cout << str.length() << " znakow\n";
       }
    total += str.length();
    cout << "Lacznie "<< total << " znakow\n";

}
