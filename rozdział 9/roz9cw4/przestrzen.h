namespace SALES
{
          const int QUARTERS = 4;
          struct Sales
          {
                 double sales[QUARTERS];
                 double average;
                 double max;
                 double min;
          };
          
          void setSales1(Sales & s, const double ar[], int n);
          
          void setSales2(Sales & s, const double ar[], int n);
          
          void setSales2(Sales & s);
          
          void showSales(const Sales & s);
}
