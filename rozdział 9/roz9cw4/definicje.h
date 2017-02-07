
void SALES::setSales1(Sales & s, const double ar[], int n)
{
     double najmniejsza=ar[0], najwieksza=ar[0];
     
     for( int i=1; i<n; i++)
     {
          if(ar[i] > najwieksza)
         najwieksza = ar[i]; //jeœli sprawdzany element tablicy jest wiêkszy od tego (dotychczas) najwiêkszego, to on staje siê tym najwiêkszym 
    
         if(ar[i] < najmniejsza)
         najmniejsza = ar[i]; //jeœli sprawdzany element tablicy jest mniejszy od tego (dotychczas) najmniejszego, to on staje siê tym najmniejszym
    
    }
     
     s.min = najmniejsza;
     s.max = najwieksza;
     s.average = (s.min+s.max)/2;
}

void SALES::setSales2(Sales & s, const double ar[], int n)
{
     double najmniejsza=ar[0], najwieksza=ar[0];
     int j=0;
     
     for( int i=1; i<n; i++)
     {
          if(ar[i] > najwieksza)
          {
                   najwieksza = ar[i]; //jeœli sprawdzany element tablicy jest wiêkszy od tego (dotychczas) najwiêkszego, to on staje siê tym najwiêkszym 
                   
          }
    
         if(ar[i] < najmniejsza)
         {
                  najmniejsza = ar[i]; //jeœli sprawdzany element tablicy jest mniejszy od tego (dotychczas) najmniejszego, to on staje siê tym najmniejszym
         }
    }
    
    for(int i=0; i<n; i++)
    {
                   s.sales[j] = std::min(ar[i],ar[i+1]);
                   if(j<4)
                   {
                          j++;
                   }
    }
     
     s.min = najmniejsza;
     s.max = najwieksza;
     s.average = (s.min+s.max)/2;
}

void SALES::setSales2(Sales & s)
{
     std::cout << "Podaj kwoty za 4 kwartaly: \n";
     for(int i=0; i<4; i++)
     {
             std::cin >> s.sales[i];
     }
     
     double najmniejsza = s.sales[0], najwieksza = s.sales[0];
     
     for( int i=1; i<4; i++)
     {
          if(s.sales[i] > najwieksza)
         najwieksza = s.sales[i]; //jeœli sprawdzany element tablicy jest wiêkszy od tego (dotychczas) najwiêkszego, to on staje siê tym najwiêkszym 
    
         if(s.sales[i] < najmniejsza)
         najmniejsza = s.sales[i]; //jeœli sprawdzany element tablicy jest mniejszy od tego (dotychczas) najmniejszego, to on staje siê tym najmniejszym
    
    }
     
     s.min = najmniejsza;
     s.max = najwieksza;
     s.average = (s.min+s.max)/2;
     
}

void SALES::showSales(const Sales & s)
{
     if(s.sales[0]!=0)
     {
                      std::cout << "Kwoty za 4 kwartaly ze struktury SALES: \n";
                      for(int i=0; i<4; i++)
                      {
                              std::cout << s.sales[i] << " ";
                      }
                      std::cout << "\n";
     }
     
     std::cout << "Wartosc najmniejsza, najwieksza, srednia : \n";
     std::cout << " " << s.min  << " " << s.max << " " << s.average << "\n";
}


