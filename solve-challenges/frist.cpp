
#include <iostream>
using namespace std;
int main()
{
             // 1- Challenge 1: Largest Number && 
            // 2- Ask the user for 3 numbers and print the largest
              int n[3];
             // Ask me theree time 
            for(int i = 0; i < 3; i++){
            cout<<"enter number here : \n";
            cin >> n[i]; 
            }
            
            //took frome n[i]
            int largest = n[0]; 
            
            for (int i = 1; i < 3; i++) {
            if (n[i] > largest) {
            largest = n[i];
            }
            }
            // check if big then 
            cout << "The largest number is: " << largest << endl;
            
           // "********* this is the end ************
            
            // Challenge 3: Sum of Numbers
            // Ask the user how many numbers they want to enter, then calculate the total.
            int pen ;
            int sum = 0;// fouce on this inportent
            for (int i = 0; i < 3; i++) {
            cout << "how many number do you wont " << i + 1 << " : ";
            cin>> pen;
            sum += pen;
            
            }
            cout << "the result is " << sum << endl;
            // "********* this is the end ************
  
            // Challenge 2: Even or Odd
            // Ask the user for a number and print whether it's even or odd.
            int odd;
            cout << "write a number here :";
            cin >> odd;
            if(odd % 2 == 0){
                cout << "this number is accpeted \n";
            }else{
                  cout << "this number is not  accpeted \n" ;
            }
             // "********* this is the end ************
  
            
             //the best Challenge ever

    string CorrectUserName = "admin";
    string CorrectPassword = "1234";
   
     string UserName ;
     string Password ; 
     
    for (int i = 1; i <= 3; i++) {
          
         cout << "enter your name \n";
        cin >> UserName;
            
        cout << "enter your Password \n";
        cin >> Password;
             
     if(UserName == CorrectUserName && Password == CorrectPassword){
       
         cout << "access \n";
         break;
     } 
         
    if (i == 3) {
        cout << "Account Locked\n";
    }
         
     }


     cout << "your name is : "<<  UserName << endl;
     cout << "your Password is : "<<  Password << endl; 
     
     
    return 0;
}