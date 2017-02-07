#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string dane="";
    char c;
    size_t dlugosc;
    int licz=0,i=0;
    
    while(true)
    {
               if(c != '@')
               {
                    cin >> c;
                    dane += c;
                    licz+=1;
               }
               else
               {
                   licz-=1;
                   break;
               }
    }
    
    while(dane[i])
    {
         c=dane[i];
         if(isalpha(c))
         {
                       if (islower(c))
                       {
                          c=toupper(c);
                          dane[i]=c;
                       }
                       else
                       {
                           c=tolower(c);
                           dane[i]=c;
                       }
         }
         else
         {
             //dane.erase(i,1);
             dane[i]=' ';
         }
         i++;
         
    }
    
    for(int i=0; i<licz; i++)
    {
            if(dane[i]==' ')
            {
                          dane.erase(i,1);
            }
    }
    
    cout << dane << endl;
    cout << licz << endl;
    
    
    system("pause");
    return 0;
}
