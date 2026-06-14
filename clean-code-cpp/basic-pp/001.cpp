/********************Organization Code*******************************/

#include <iostream>
using namespace std;
// this function is responsible for asking the user for their name and returning it as a string
string askUser(){
    string user ;
    cout << "what it's your name please !\n";
    getline(cin, user);
    return user;
}
// this function is responsible for asking the user for their name and returning it as a string
void Print(string Name){
 cout << "your name is :" << Name << endl;    
}


// this enum is responsible for representing the type of a number (odd or even)
enum ENnumbertype { Odd = 1 , Event = 2 };

int ReadNmber(){
    int Name;
    cout << "please enter a number \n";
    cin >> Name;
    return Name;
}
// this function is responsible for checking the number type (odd or even) and returning the result as an enum value
ENnumbertype CheckNumberType(int Name){
    int resulte = Name  % 2;
    if(resulte == 0)
    return ENnumbertype::Odd;
    else
    return ENnumbertype::Event;
}
// this function is responsible for printing the number type (odd or even) to the user
void printOO(ENnumbertype NumberType){
    if(NumberType == ENnumbertype::Odd)
    cout << "\n number is Event \n";
    else
    cout << "\n number is Odd \n";
}

// this struct is responsible for storing the user data (age and driving license status)
struct stUser{
    int age;
    bool HasDrivingLicense;
};
// this function is responsible for reading the user data (age and driving license status) from the user
stUser ReadUserData(){
    stUser user;
    cout << "please enter your age \n";
    cin >> user.age;
    cout << "do you have a driving license ? (1 for yes , 0 for no) \n";
    cin >> user.HasDrivingLicense;
    return user;
};
// this function is responsible for checking the driving eligibility of the user
bool checkDrivingEligibility(stUser user){
    if(user.age >= 18 && user.HasDrivingLicense)
    return true;
    else
    return false;
}

// this function is responsible for printing the eligibility result to the user
void printDrivingEligibility(stUser user){
    bool isEligible = checkDrivingEligibility(user);
    if(isEligible)
    cout << "\n you are eligible to drive \n";
    else
    cout << "\n you are not eligible to drive \n";
}



int main()
{

    cout<<"***********************Questions************************** \n";
    //ask the user for their name and print it back to them
    Print(askUser());
    //print the number type (odd or even) to the user
    printOO(CheckNumberType(ReadNmber()));
    //print the driving eligibility result to the user
    printDrivingEligibility(ReadUserData());











    return 0;
}