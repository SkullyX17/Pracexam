#include<iostream>
#include "Car.h"
#include "Tesla.h"
using namespace std;


int main()
{
Tesla t1;
Tesla t2('1',200);
    cout<<"Price:"<< t1.get_price()
        <<" Emissions:"<< t1.get_emissions()
        <<" Model:"<<t1.get_model()
        <<" Percent:"<<t1.get_batteryPercentage()<<endl;
        cout<<"Price:"<< t2.get_price()
        <<" Emissions:"<< t2.get_emissions()
        <<" Model:"<<t2.get_model()
        <<" Percent:"<<t2.get_batteryPercentage()<<endl<<endl;
        
    t1.set_price(100);
    t1.set_model('T');
    t1.drive(10);
    t2.drive(490);
    cout<<"Price:"<< t1.get_price()
        <<" Emissions:"<< t1.get_emissions()
        <<" Model:"<<t1.get_model()
        <<" Percent:"<<t1.get_batteryPercentage()<<endl;
        cout<<"Price:"<< t2.get_price()
        <<" Emissions:"<< t2.get_emissions()
        <<" Model:"<<t2.get_model()
        <<" Percent:"<<t2.get_batteryPercentage()<<endl<<endl;
    t1.chargeBattery(6);
    t2.set_batteryPercentage(50);
    cout<<"Price:"<< t1.get_price()
        <<" Emissions:"<< t1.get_emissions()
        <<" Model:"<<t1.get_model()
        <<" Percent:"<<t1.get_batteryPercentage()<<endl;
        cout<<"Price:"<< t2.get_price()
        <<" Emissions:"<< t2.get_emissions()
        <<" Model:"<<t2.get_model()
        <<" Percent:"<<t2.get_batteryPercentage()<<endl<<endl;
    
}