#include <iostream>
using namespace std;

struct MyStruct
{
	string brand;
	string color;
    double width;
    double length;
    double height;
    double power;
    double speed;
    double temperature;
};
void change_brand(MyStruct& washing_machine)
{
    string new_brand;
    cout << "New brand : ";
    cin >> new_brand;
    washing_machine.brand = new_brand;
}
void change_color(MyStruct& washing_machine)
{
    string color;
    cout << "New color : ";
    cin >> color;
    washing_machine.color = color;
}
void change_width(MyStruct& washing_machine)
{
    double width;
    cout << "New width : ";
    cin >> width;
    washing_machine.width = width;
}
void change_length(MyStruct& washing_machine)
{
    double length;
    cout << "New length : ";
    cin >> length;
    washing_machine.length = length;
}
void change_height(MyStruct& washing_machine)
{
    double height;
    cout << "New height : ";
    cin >> height;
    washing_machine.height = height;
}
void change_power(MyStruct& washing_machine)
{
    double power;
    cout << "New power : ";
    cin >> power;
    washing_machine.power = power;
}
void change_speed(MyStruct& washing_machine)
{
    double speed;
    cout << "New speed : ";
    cin >> speed;
    washing_machine.speed = speed;
}
void change_temperature(MyStruct& washing_machine)
{
    double temperature;
    cout << "New temperature : ";
    cin >> temperature;
    washing_machine.temperature = temperature;
}
void print(MyStruct& washing_machine)
{
    cout << "<------------------------------------->" << endl;
    cout << "Brand : " << washing_machine.brand << endl;
    cout << "Color : " << washing_machine.color << endl;
    cout << "Width : " << washing_machine.width << endl;
    cout << "Length : " << washing_machine.length << endl;
    cout << "Height : " << washing_machine.height << endl;
    cout << "Power : " << washing_machine.power << endl;
    cout << "Speed : " << washing_machine.speed << endl;
    cout << "Temperature : " << washing_machine.temperature << endl;
    cout << "<------------------------------------->" << endl;
}

int main()
{
    MyStruct washing_machine = { "Samsung", "White", 1.2, 1.1, 1.0, 2000, 5000, 90};
    print(washing_machine);
    change_brand(washing_machine);
    change_color(washing_machine);
    change_width(washing_machine);
    change_length(washing_machine);
    change_height(washing_machine);
    change_power(washing_machine);
    change_speed(washing_machine);
    change_temperature(washing_machine);
    print(washing_machine);
	return 0;
}