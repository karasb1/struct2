#include <iostream>
using namespace std;

struct MyStruct
{
    string brand;
    string model;
    string color;
    double minT;
    double maxT;
    string steam;
    double power;
};
void change_brand(MyStruct& iron)
{
    string brand;
    cout << "New brand : ";
    cin >> brand;
    iron.brand = brand;
}
void change_color(MyStruct& iron)
{
    string color;
    cout << "New color : ";
    cin >> color;
    iron.color = color;
}
void change_model(MyStruct& iron)
{
    string model;
    cout << "New model : ";
    cin >> model;
    iron.model = model;
}
void change_minT(MyStruct& iron)
{
    double minT;
    cout << "New minimal tempurature : ";
    cin >> minT;
    iron.minT = minT;
}
void change_maxT(MyStruct& iron)
{
    double maxT;
    cout << "New maximal tempurature : ";
    cin >> maxT;
    iron.maxT = maxT;
}
void change_power(MyStruct& iron)
{
    double power;
    cout << "New power : ";
    cin >> power;
    iron.power = power;
}
void change_steam(MyStruct& iron)
{
    string steam;
    cout << "New steam : ";
    cin >> steam;
    iron.steam = steam;
}
void print(MyStruct& iron)
{
    cout << "<------------------------------------->" << endl;
    cout << "Brand : " << iron.brand << endl;
    cout << "Color : " << iron.model << endl;
    cout << "Width : " << iron.color << endl;
    cout << "Length : " << iron.minT << endl;
    cout << "Height : " << iron.maxT << endl;
    cout << "Power : " << iron.steam << endl;
    cout << "Speed : " << iron.power << endl;
    cout << "<------------------------------------->" << endl;
}

int main()
{
    MyStruct iron = { "LG", "X0385", "Grey", 80, 200, "Yes", 200};
    print(iron);
    change_brand(iron);
    change_model(iron);
    change_color(iron);
    change_minT(iron);
    change_maxT(iron);
    change_steam(iron);
    change_power(iron);
    print(iron);
    return 0;
}