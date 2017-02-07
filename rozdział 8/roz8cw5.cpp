#include<iostream>

using namespace std;

template<typename T>
void max5(T tab[]);

int main()
{
    int tab1[5] = {1,2,3,4,5};
    double tab2[5] = {1.1,1.2,1.3,1.4,1.5};
    
    max5(tab1);
    cout << endl;
    max5(tab2);
    
    system("pause");
    return 0;
}

template<typename T>
void max5(T tab[])
{
     T max = tab[0];
     T min = tab[0];
     
     for( int i = 1; i < 5; i++ )
     {
          if( tab[ i ] > max )
          max = tab[ i ]; //je�li sprawdzany element tablicy jest wi�kszy od tego (dotychczas) najwi�kszego, to on staje si� tym najwi�kszym 
    
          if( tab[ i ] < min )
          min = tab[ i ]; //je�li sprawdzany element tablicy jest mniejszy od tego (dotychczas) najmniejszego, to on staje si� tym najmniejszym
    
    }
    
    cout << "Najwieksza wartosc w tablicy: " << max << endl;
    cout << "Najmniejsza wartosc w tablicy: " << min << endl;
    
}
