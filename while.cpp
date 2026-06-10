
#include <iostream>
using namespace std ;
int main()
{
int e[10]={10,20,30,40,50,60,70,80,100};
int insure = 70;

for(int s = 0; s<6; s++){
    
    if(s == 3){
        continue;
    }
    cout << s << endl;
}



for(int i = 0; i< 10; i++){
    
    if(insure == e[i]){
        cout << i <<" this is the point \n";
        break;
    }
 }
 while(e > 0){
     cout << "hot wethers outside\n";
 }
    return 0;
}