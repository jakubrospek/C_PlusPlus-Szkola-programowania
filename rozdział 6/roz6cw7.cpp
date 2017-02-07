#include<iostream>
#include<locale>

using namespace std;

int main()
{
    string slowa;
    int znaki=0, licznik=0, sam=0, spol=0, liczby=0;
    
    char samogloski[8] = {'i','y','e','a','o','u','¹','ê'};
    
    cout << "Podawaj slowa (pojedyncze q konczy zliczanie)" << endl;
    getline(cin, slowa);
    
    cout << endl;
    
    znaki = slowa.length();
    
    
    int * indeksy = new int[znaki];
    
    for(int i=0; i<znaki; i++)
    {
            indeksy[i]=0;
    }
    
    for(int i=0; i<znaki; i++)
    {
            if(slowa[i] == ' ')
            {
                        if(slowa[i+1] != 'q' && slowa[i+2] != ' ')
                        {
                                      indeksy[i]=i;
                                      licznik+=1;
                        }
                        else if(slowa[i+1] == 'q' && slowa[i+2] == 'q')
                        {
                                           indeksy[i]=i;
                                           licznik+=1;
                        }
                        else
                        break;
            }
    }
    
    for(int i=0; i<znaki; i++)
    {
            if(indeksy[i]!=0)
            {
                             for(int j=0; j<8; j++)
                             {
                                     
                                     if(samogloski[j] == slowa[i+1])
                                     {
                                                      sam+=1;
                                     }
                                                          
                             }
            }
            
    }
    
    for(int j=0; j<8; j++)
	{
		if(samogloski[j] == slowa[0])
		{
			sam+=1;
		}
	}
	
	for(int i=0; i<znaki; i++)
    {
            if(indeksy[i]!=0)
            {
                             if(isalpha(slowa[i+1]))
                             {
                                                    //spol+=1;
                             }
                             else
                             {
                                 liczby+=1;
                             }
            }
    }
    
    if(!isalpha(slowa[0]))
    {
                           liczby+=1;
    }
	
	spol = (licznik+1) - sam - liczby;
	
    cout << "Calkowita liczba wyrazow: " << licznik+1 << endl;
    cout << "Ilosc slow zaczynajacych sie od samogloski: " << sam << endl;
    cout << "Ilosc slow zaczynajacych sie od spolgloski: " << spol << endl;
    cout << "Slowa spoza tych dwoch kategorii: " << liczby << endl << endl;
    
    system("pause");
    return 0;
}
