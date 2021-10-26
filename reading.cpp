#include "reading.h"
#include <iostream>
using namespace std;
reading::reading()
{
	windspeed = 32;
		humidity = .32;
		Temperature = 32.0;


}
reading::reading(int w, double h, double t) {
	windspeed = w;
	humidity = h;
	Temperature = t;
}
	

void reading:: printreading()
{
	cout << "Temperature" << Temperature << "humidity" << humididty << "windspeed" << windspeed<< endl;

}
void reading:: setWind(int w)
{
	windspeed = w;

}
void reading::sethumidity(double h)
{

	humidity = h;

}
void reading::setTemp(double t)
{
	Temperature = t;

}
int reading:: getwind


double reading::getHumididty()
{

	return humidity



}


reading::~reading()
	{

	}






