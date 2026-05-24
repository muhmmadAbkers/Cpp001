#include <iostream>
#include <string>
#include <cmath>
using namespace std;


///////////////////enums
enum Color {RED ,GREEN ,BLUE };
enum Gendar {Male ,Female  };
enum Married {sngle ,married  };
enum Counter {outside ,inside  ,abroud };
/////////////////////// structs
struct stadress
{
    string StreetName;
    string BludingName;
    string POBox;
    string ZibCode;
    
};

///////////////////////////////structs
struct info
{
    string Phone;
    string Email;
    string Adress;
    stadress address;
};
////////////////////////////

///////////////////////////////structs
struct stPerson
{
    string FristName;
    string LastName;
    // struct info
    info ContacatInfo;
    
    //All is here enums 
    Color colors;
    Gendar Gendars;
    Married marrieds;
    Counter cantery;
};
////////////////////////////

void MainInfo(stPerson &person001)
{
       // stPerson 001
    person001.FristName = "Humadd ";
    person001.LastName = " AbuHudaude";
    
    // info 002
     person001.ContacatInfo.Email = "sootoomnb4w23@gmail.com";
     person001.ContacatInfo.Phone = "08456485097";
     person001.ContacatInfo.Adress = "topTens";
     
     
     // info >> stadress
     person001.ContacatInfo.address.ZibCode = "#189741";
     person001.ContacatInfo.address.StreetName = "nuwaray";
     person001.ContacatInfo.address.BludingName = "Muhmmmmaod0098";
     person001.ContacatInfo.address.POBox = "87645*&%^$#$@#@";
     
     //enums All 
     person001.colors = Color::RED;
     person001.Gendars = Gendar::Female;
     person001.marrieds = Married::sngle;
     person001.cantery = Counter::outside;
     
};



int main() {
    
    
    // all info comes here
    stPerson person001;
    stPerson person002;
    stPerson person003;
    
    MainInfo(person001);
    MainInfo(person002);
    MainInfo(person003);
    cout << "\n "<< endl;
    cout << "\t  \\ "<< person001.ContacatInfo.address.StreetName <<endl;
    cout << "\t  \\ "<< person002.ContacatInfo.address.POBox <<endl;
    cout << "\t \\  "     << person003.ContacatInfo.address.ZibCode <<endl;
    cout << "\t \\  "     << person001.LastName<<endl;
    cout << "\t \\  "<< person001.FristName<<endl;
   
 
    cout << "\n "<< endl;
    int itme;
    double itme001 = 12.34;
    //this are Three woy to trun double to int 
    // itme = itme001;
   // itme = (int)itme001;
   //itme = int(itme001);
    
  cout<< itme ;

    return 0;
}