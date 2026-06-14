
#include <iostream>
using namespace std;

void print(int n){
    for (int i = 1; i <= n; i++){
         
       for(int e = 1; e <= i; e++){
           cout << "  ";
       }
        cout << i << "  ";
    }
    cout << "\n";
}

void print2(){
      for ( int t = 10 ; t >= 1; t-- ){
       
       for(int e = 1; e <= t; e++){
           cout << e  << "  ";
       }
      
       cout << "\n";
   }
}

void print3(){
    
 for ( int t = 10 ; t >= 1; t-- ){
       
       for(int e = 1; e <= t; e++){
           cout << t << e << "  ";
       }
      
       cout << "\n";
   }
};

int main()
{
    // print(10);
    // print2();
    // print3();
    int  user; 
    cout << "put numbers : \n";
    cin >> user;

   while (user > 50){
       //print(user);
       cout << "this is the large number i got : \n";
   }
    










    return 0;
}