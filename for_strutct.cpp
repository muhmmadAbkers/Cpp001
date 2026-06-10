/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

struct Info {
    string FristName;
    string LastName;
    int age;
    string Phone;
};

void Read_Info(Info& Person , Length){
    
    cout << "**************************\n";
    cout << "Enter First Name: ";
    cin >> Person.FristName;
    
    cout << "Enter Last Name: ";
    cin >> Person.LastName;
    
    cout << "Enter Age: ";
    cin >> Person.age;
    
    cout << "Enter Phone: ";
    cin >> Person.Phone;
    
    cout << "***************************\n";
    
};

void preint_Info(Info Person){
     
    cout << "\nPerson Information:\n" << Length;
    
    cout << "First Name : " << Person.FristName << endl;
    cout << "Last Name  : " << Person.LastName << endl;
    cout << "Age        : " << Person.age << endl;
    cout << "Phone      : " << Person.Phone << endl;
        
    
 };
 
 
void  ReadPerson(Info Person[100] ,int&  Length){
    
    cout << "how many Person do wont shose 1 to 100 \n";
    cin >> Length;
    
    for (int i = 0 ; i <= Length -1; i++){
    cout << "Person ["<< ++i <<"] \n" ;    
    Read_Info(Person[i]);
    //Read_Info(Person[i]);
    
    }
}  ; 


void bet(Info Person[100] , int Length){
    
       // preint_Info(Person[0]);
       // preint_Info(Person[1]);
    ///cout << "how many Person do wont shose 1 to 100 \n";
    //cin >> Length;
    
    for (int i = 0 ; i <= Length -1; i++){
    cout << "Person ["<< i + 1 <<"] \n" ;    
    preint_Info(Person[i]);
    //preint_Info(Person[i]);
}
        
        
    
    
    
int main()
{
   Info Person[100];
   int Length = 1;
   ReadPerson(Person , Length);
   bet(Person, Length);
    return 0;
}
