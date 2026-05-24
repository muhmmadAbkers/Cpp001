#include <iostream>
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

int main() {
    // all info comes here
    stPerson person001;
    
    
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
     person001.ContacatInfo.address.POBox = "87645(*&%^$#$@#@";
     
     //enums All 
     person001.colors = Color::RED;
     person001.Gendars = Gendar::Female;
     person001.marrieds = Married::sngle;
     person001.cantery = Counter::outside;
     
     
    //this are Three woy to trun double to int 
    // itme = itme001;
   // itme = (int)itme001;
   //itme = int(itme001);
//   cout<<  ;

    return 0;
}