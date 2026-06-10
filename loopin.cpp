
#include <iostream>
using namespace std;
int main()
{
   for ( int t = 10 ; t >= 1; t-- ){
       
       for(int e = 1; e <= t; e++){
           cout << e  << "  ";
       }
      
       cout << "\n";
   }


 for ( int t = 10 ; t >= 1; t-- ){
       
       for(int e = 1; e <= t; e++){
           cout << t << e << "  ";
       }
      
       cout << "\n";
   }
    return 0;
}