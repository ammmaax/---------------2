#include<iostream>
#include<string>
using namespace std;
 
class Transport
{
protected:
  int koleso = 2;
  string model;
  int year;
  string color;
  double price;
public:
  Transport(){}
  void Init(string md, int yr, string col, double pr)
  {
    koleso = 2;
    model = md;
    year = yr;
    color = col;
    price = pr;
  }
  void Print()
  {
    cout << "Number of wheels: " << koleso << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Color: " << color << endl;
    cout << "Price: " << price << endl;
  }
};
 
class Bicycle: public Transport
{
  string brand;
  int gears;
public:
  Bicycle(){}
  void Init(string md, int yr, string col, double pr, string br, int gr)
  {
    Transport::Init(md,yr,col,pr);
    brand = br;
    gears = gr;
  }
  void Print()
  {
    Transport::Print();
    cout << "Brand: " << brand << endl;
    cout << "Gears: " << gears << endl << endl;
  }
};
 
class Motorcycle: public Transport
{
  string brand;
  double enginevolume;
public:
  Motorcycle(){}
  void Init(string md, int yr, string col, double pr, string br, double eng)
  {
    Transport::Init(md,yr,col,pr);
    brand = br;
    enginevolume = eng;
  }
  void Print()
  {
    Transport::Print();
    cout << "Brand: " << brand << endl;
    cout << "Engine volume: " << enginevolume << "cc" << endl << endl;
  }
};
 
class Sedan: public Transport
{
  int doors;
  double trunkvolume;
public:
  Sedan(){}
  void Init(string md, int yr, string col, double pr, int dr, double trunk)
  {
    Transport::Init(md,yr,col,pr);
    koleso = 4;
    doors = dr;
    trunkvolume = trunk;
  }
  void Print()
  {
    Transport::Print();
    cout << "Doors: " << doors << endl;
    cout << "Trunk volume: " << trunkvolume << "l" << endl << endl;
  }
};
 
class Jeep: public Transport
{
  double height;
  int passengers = 7;
public:
  Jeep(){}
  void Init(string md, int yr, string col, double pr, double hei)
  {
    Transport::Init(md,yr,col,pr);
    koleso = 4;
    height = hei;
    passengers = 7;
  }
  void Print()
  {
    Transport::Print();
    cout << "Height: " << height << "sm" << endl;
    cout << "Passengers: " << passengers << endl << endl;
  }
};
 
class Bus: public Transport
{
  string road;
  int seats;
  bool lowFloor;
public:
  Bus(){}
  void Init(string md, int yr, string col, double pr, string rd, int st, bool low)
  {
    Transport::Init(md,yr,col,pr);
    koleso = 6;
    road = rd;
    seats = st;
    lowFloor = low;
  }
  void Print()
  {
    Transport::Print();
    cout << "Road: " << road << endl;
    cout << "Seats: " << seats << endl;
    cout << "Low floor: " << lowFloor << endl << endl;
  }
};
 
class Truck: public Transport
{
  double loadweight;
  bool trailer;
public:
  Truck(){}
  void Init(string md, int yr, string col, double pr, double load, bool tr)
  {
    Transport::Init(md,yr,col,pr);
    koleso = 6;
    loadweight = load;
    trailer = tr;
  }
  void Print()
  {
    Transport::Print();
    cout << "Load weight: " << loadweight << "kg" << endl;
    cout << "Trailer: " << trailer << endl << endl;
  }
};
 
int main()
{
  Bicycle bike;
  bike.Init("Trek Marlin 5", 2023, "blue", 720, "Trek", 21);
  bike.Print();
 
  Motorcycle moto;
  moto.Init("Honda CBR500R", 2021, "red", 7800, "Honda", 500);
  moto.Print();
 
  Sedan sedan;
  sedan.Init("Audi A4", 2018, "black", 17500, 4, 480);
  sedan.Print();
 
  Jeep jeep;
  jeep.Init("Audi Q5", 2020, "gray", 42000, 178);
  jeep.Print();
 
  Bus bus;
  bus.Init("Volvo 7900", 2019, "white", 135000, "Route 15", 50, false);
  bus.Print();
 
  Truck truck;
  truck.Init("DAF euro 5", 2016, "orange", 30000, 20000, false);
  truck.Print();
 
  return 0;
}