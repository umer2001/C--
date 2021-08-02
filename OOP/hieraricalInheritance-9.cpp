#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;
/*----------------------------------Function Declaration------------------------------------*/

/*--------------------------------Function Definations------------------------------------*/

/*--------------------------------Class Definations------------------------------------*/

class Vehicles
{
protected:
    int numberOfWheels, capacity;
    bool isUsedByLayMan, isPublicTransport;

protected:
    Vehicles(int vehicleWheels, int vehicleCapacity, bool isVehicleUsedByLayMan, bool isVehiclePublicTransport)
    {
        numberOfWheels = vehicleWheels;
        capacity = vehicleCapacity;
        isUsedByLayMan = isVehicleUsedByLayMan;
        isPublicTransport = isVehiclePublicTransport;
    }

    void displayAllInfo()
    {
        cout << "Number of wheels : " << numberOfWheels << endl;
        cout << "Capacity of persons : " << capacity << endl;
        cout << "Is used by common man : ";
        isUsedByLayMan ? cout << "yes" : cout << "no";
        cout << endl;
        cout << "Is public transport : ";
        isPublicTransport ? cout << "yes" : cout << "no";
        cout << endl;
    }
};

class Truck : public Vehicles
{
private:
    int loadingCapacity;

public:
    Truck(int truckLoadingCapacity) : Vehicles(6, 4, false, false)
    {
        loadingCapacity = truckLoadingCapacity;
    }

    void displayAllInfo()
    {
        cout << "This is a truck" << endl;
        cout << "Loading Capacity in tons : " << loadingCapacity << endl;
        Vehicles::displayAllInfo();
    }
};

class Car : public Vehicles
{

public:
    Car() : Vehicles(4, 5, true, false)
    {
    }

    void displayAllInfo()
    {
        cout << "This is a car" << endl;
        Vehicles::displayAllInfo();
    }
};

class Bus : public Vehicles
{
private:
    int fare;

public:
    Bus(int busFare) : Vehicles(4, 50, true, true)
    {
        fare = busFare;
    }

    void displayAllInfo()
    {
        cout << "This is a bus" << endl;
        cout << "Fare to next point in rupees : " << fare << endl;
        Vehicles::displayAllInfo();
    }
};

int main()
{
    Truck t1(10);
    Bus b1(15);
    Car c1;

    // all 3 inherit aributes & behaviors with different vales
    t1.displayAllInfo();
    cout << "\n\n";
    b1.displayAllInfo();
    cout << "\n\n";
    c1.displayAllInfo();
    return 0;
}