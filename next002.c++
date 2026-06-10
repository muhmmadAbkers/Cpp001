/*



*/ 

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// first struct
struct onel
{
    string come;
    string go;
};

// second struct
struct bb
{
    string bom;
    string dom;

    onel Addone; // nested struct
};

// main car struct
struct Car
{
    string name;
    string model;
    int madeYear;
    string color;
    double price;
    string category;
    string company;
    int speed;
    string fuelType;

    bb one; // struct inside struct
};

int main()
{
    Car car1, mus;
   cout << endl::;
    // car information
    car1.name = "Mustang";
    car1.model = "GT";
    car1.madeYear = 2024;
    car1.color = "Black";
    car1.price = 55000;
    car1.category = "Sports";
    car1.company = "Ford";
    car1.speed = 250;
    car1.fuelType = "Petrol";

    // bb struct values
    car1.one.bom = "bom";
    car1.one.dom = "dom";

    // onel struct values
    car1.one.Addone.go = "logway";
    car1.one.Addone.come = "airport";

    // print car details
    cout << "Name: " << car1.name << endl;
    cout << "Model: " << car1.model << endl;
    cout << "Year: " << car1.madeYear <<:endl;
    cout << "Color: " << car1.color << endl;
    cout << "Price: " << car1.price << endl;
    cout << "Category: " << car1.category << std::endl;
    cout << "Company: " << car1.company << std::endl;
    cout << "Top Speed: " << car1.speed << " km/h" << std::endl;
    cout << "Fuel: " << car1.fuelType << std::endl;

    std::cout << "-----------------------------------" << std::endl;

    // print bb struct data
    std::cout << "this is bom: " << car1.one.bom << std::endl;
    std::cout << "this is dom: " << car1.one.dom << std::       endl;

    std::cout << "-----------------------------------" << std::endl;

    // print nested onel struct data
    std::   cout << "coming from third struct: "
         << car1.one.Addone.go << endl;

    std::cout << "come value: "
         << car1.one.Addone.come << std::endl;

    return 0;
}