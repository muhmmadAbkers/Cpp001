
#include <iostream>
using namespace std;

// this function is responsible for reading the user data (first name and last name) from the user
int Read001(){
    int Numb;
    
    cout << "please enter the numbers :\n";
    cin >> Numb;
    return Numb;
};

// this function is responsible for calculating the half of the number
float CalculatHalfNuber(int Nau){
    return (float)Nau /2;
}
// this function is responsible for printing the full name of the user
void Pnt(int Nau){
    string result = "Half of " + to_string(Nau)  + " Is " + to_string(CalculatHalfNuber(Nau));
    cout << "this is have number " << result << endl;
  
  //Twe Ways You Can Use
  //
    cout << "Half of " << to_string(Nau)  << " Is " << to_string(CalculatHalfNuber(Nau)) <<endl;
     cout << "Half of " << Nau << " Is " << CalculatHalfNuber(Nau) << endl;
    
}



int main()
{
    // this is the main function that calls the other functions to read the user data, get the full name and print it
   Pnt(Read001());

    return 0;
}