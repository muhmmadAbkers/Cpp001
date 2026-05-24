#include <iostream>
#include <string>

using namespace std;

// address struct
struct Address
{
    string city;
    string street;
};

// engine struct
struct Engine
{
    string engineName;
    int horsePower;

    Address location;
};

// car struct
struct Car
{
    string name;
    string model;
    int madeYear;
    string color;
    double price;

    Engine carEngine;
};

// function to show car details
void showCar(Car car1)
{
    cout << "\n========= CAR INFO =========" << endl;

    cout << "Name: " << car1.name << endl;
    cout << "Model: " << car1.model << endl;
    cout << "Year: " << car1.madeYear << endl;
    cout << "Color: " << car1.color << endl;
    cout << "Price: $" << car1.price << endl;

    cout << "\n========= ENGINE INFO =========" << endl;

    cout << "Engine: "
         << car1.carEngine.engineName << endl;

    cout << "Horse Power: "
         << car1.carEngine.horsePower << endl;

    cout << "\n========= LOCATION INFO =========" << endl;

    cout << "City: "
         << car1.carEngine.location.city << endl;

    cout << "Street: "
         << car1.carEngine.location.street << endl;
}

// function to create BMW data
void makeBMW(Car &car1)
{
    car1.name = "BMW";
    car1.model = "M5";
    car1.madeYear = 2025;
    car1.color = "Blue";
    car1.price = 95000;

    car1.carEngine.engineName = "V8 Twin Turbo";
    car1.carEngine.horsePower = 717;

    car1.carEngine.location.city = "Jeddah";
    car1.carEngine.location.street = "King Road";
}

int main()
{
    Car car1;

    string userCar;

    // ask user
    cout << "What kind of car do you want? ";
    cin >> userCar;

    // check user choice
    if (userCar == "BMW")
    {
        makeBMW(car1);

        showCar(car1);
    }
    else
    {
        cout << "Sorry, this car is not available." << endl;
    }

    return 0;
}