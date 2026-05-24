// Online C++ compiler to run C++ program online
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// All the kinda of functions in c++
void numbers() {

    int b = 11;

    // cout << os(4) * op(4) << endl;

    cout << ceil(sqrt(b)) << endl; 
    // sqrt(11)=3.31 → ceil rounds UP → 4

    cout << floor(sqrt(b)) << endl; 
    // sqrt(11)=3.31 → floor rounds DOWN → 3

    cout << floor(sqrt(pow(3,3))) << endl; 
    // pow(3,3)=27
    // sqrt(27)=5.19
    // floor → 5

    cout << ceil(sqrt(pow(3,3))) << endl; 
    // pow(3,3)=27
    // sqrt(27)=5.19
    // ceil → 6

    cout << round(37.56 - 739 + 2934);
    // 37.56 - 739 + 2934 = 2232.56
    // round → 2233
}
void numbersStatuse(); //function declaration
{

 cout << ceil(sqrt(18)) << endl; // ceil = round UP → sqrt(18)=4.24 → 5
cout << ceil(sqrt(19)) << endl; // sqrt(19)=4.35 → 5
cout << ceil(sqrt(20)) << endl; // sqrt(20)=4.47 → 5

cout << "################################################ \n";

// cout << pow(4,2) << endl; // 4^2 = 16

cout << floor(sqrt(21)) << endl; // floor = round DOWN → sqrt(21)=4.58 → 4
cout << floor(sqrt(22)) << endl; // sqrt(22)=4.69 → 4

cout << "################################################ \n";

cout << round(sqrt(23)) << endl; // round nearest → sqrt(23)=4.79 → 5
cout << round(sqrt(31)) << endl; // sqrt(31)=5.56 → 6
cout << round(sqrt(32)) << endl; // sqrt(32)=5.65 → 6
cout << round(sqrt(42)) << endl; // sqrt(42)=6.48 → 6
cout << round(sqrt(23)) << endl; // sqrt(23)=4.79 → 5

cout << "################################################ \n";
}

//frist 001 void name() call name()

void name(){
    cout << "hello world";
}; 



//functinos with pramtmetrs
void names(string names, int n){
    cout << "Mr.mohmmad abu hamddan you are the "<< names;
    cout << " you'r target is "<< n << endl;
    
};

 //function return value
 int numbers(int a , int b){
     return a * b;
 }


 // main function
int main() {
   //call function void names()
   names("hassan",120);cout <<endl;
    cout << numbers(12,40);
   
    return 0;
}