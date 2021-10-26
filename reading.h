#pragma once
class reading
{
public:
	reading();
	reading(int w, double h, double t);
	~reading();
	void printReading();
	void setWind(int);
	void setHumididty(double);
	void setTemp(double);
private:
	int windspeed;
	double humidity;
	double Temperature;


};

