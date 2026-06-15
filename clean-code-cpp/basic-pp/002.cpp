
#include <iostream>
using namespace std;
// this struct is responsible for storing the user data (first name and last name)
struct Info{
    string FristName;
    string LastName;
};
// this function is responsible for reading the user data (first name and last name) from the user
Info ReadIt(){
    Info idIt;
    
    cout << "please enter your FristName \n";
    cin >> idIt.FristName;
    
    cout << "please enter your LastName \n";
    cin >> idIt.LastName;
    return idIt;
};

// this function is responsible for getting the full name of the user
string GetFullName(Info idIt , bool Revers){
    
    string FullName = " ";
    if(Revers)
    FullName = idIt.LastName + " " + idIt.FristName;
    else
    FullName = idIt.FristName + " " + idIt.LastName;
    return FullName;
}
// this function is responsible for printing the full name of the user
void printNames(string FullName){
    cout << "your FullName is :" << FullName << endl;
};

int main()
{
    // this is the main function that calls the other functions to read the user data, get the full name and print it
    printNames(GetFullName(ReadIt(),false));
    return 0;
}