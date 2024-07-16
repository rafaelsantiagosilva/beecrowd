#include <iostream>

using namespace std;

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);

     double n;
     string interval = "";

     cin >> n;

     if (n >= 0 && n <= 25)
          interval = "[0,25]";
     else if (n > 25 && n <= 50)
          interval = "(25,50]";
     else if (n > 50 && n <= 75)
          interval = "(50,75]";
     else if (n > 75 && n <= 100)
          interval = "(75,100]";
     else
     {
          cout << "Fora de intervalo" << endl;
          return 0;
     }

     cout << "Intervalo " << interval << endl;

     return 0;
}