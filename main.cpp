#include <iostream>
using namespace std;

int main() {
   float a=0;
   float b=0;
   int opzione=0;
   cin >> a;
   cin >> b;
   cin >> opzione;
   float area=0;
   switch (opzione){
      case 0:
         area = a*b/2;
         cout << area << endl;
         break;
      case 1:
         area = a*a;
         cout << area << endl;
         break;
      case 2:
         area = a*b;
         cout << area << endl;
         break;
      default:
         cout << "opzione non valida" << endl;
   }
   return 0;
}
