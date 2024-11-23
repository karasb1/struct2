#include <iostream>
using namespace std;

struct MyStruct
{
    string brand;
    string color;
    double power;
    double volume;
    double tem;
};
void change_brand(MyStruct& boiler)
{
    string brand;
    cout << "New brand : ";
    cin >> brand;
    boiler.brand = brand;
}   
void change_color(MyStruct& boiler)
{
    string color;
    cout << "New color : ";
    cin >> color;
    boiler.color = color;
}
void change_power(MyStruct& boiler)
{
    double power;
    cout << "New power : ";
    cin >> power;
    boiler.power = power;
}
void change_volume(MyStruct& boiler)
{
    double volume;
    cout << "New volume : ";
    cin >> volume;
    boiler.volume = volume;
}
void change_tem(MyStruct& boiler)
{
    double tem;
    cout << "New tempurature : ";
    cin >> tem;
    boiler.tem = tem;
}
void print(MyStruct& boiler)
{
    cout << "<------------------------------------->" << endl;
    cout << "Brand : " << boiler.brand << endl;
    cout << "Color : " << boiler.color << endl;
    cout << "Width : " << boiler.power << endl;
    cout << "Length : " << boiler.volume << endl;
    cout << "Height : " << boiler.tem << endl;
    cout << "<------------------------------------->" << endl;
}

int main()
{
    MyStruct boiler = { "LG", "Grey", 500, 150, 70 };
    print(boiler);
    change_brand(boiler);
    change_color(boiler);
    change_power(boiler);
    change_volume(boiler);
    change_tem(boiler);
    print(boiler);
    return 0;
}