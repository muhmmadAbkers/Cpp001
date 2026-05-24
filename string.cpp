/***************************Small Porjects ****************************************/

#include <iostream>
using namespace std;
int main()
{
    string mouse;
    string tow;
    string ten;
    
    cout << "plaease inter Name of string 001:: ..????\n";
    getline(cin, mouse);
    cout << "plaease enter string tow ::::::?\n";
    getline(cin, tow);
    cout << "plaease enter string ten ::::::?\n";
    getline(cin, ten);
    
    // cout<<"Hello World /t" << mouse;
    cout <<"#################################################################\n";
    cout << "how you doing mr:      "<< mouse << "it's plature to see ya"<< endl;
    cout <<"#################################################################\n";
    cout << "make them colse :  :=    "<< tow + ten << "its string not intger\n";
    cout <<"#################################################################\n";
    cout << "so now you going to motple both =  "<< stoi(ten) * stoi(ten) << endl;
    cout <<"#################################################################\n";
    
   /*
        git commit -m "Add string input handling and basic string/int operations
        
        - Added user input using getline() for three strings
        - Displayed formatted greeting messages to the user
        - Combined two strings using concatenation
        - Converted string values to integers using stoi()
        - Added multiplication operation for numeric string input
        - Improved console output formatting with separators"
   */



    return 0;
}