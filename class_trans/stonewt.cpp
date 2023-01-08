#define _CRT_SECURE_NO_WARNINGS 1
#include"stonewt.h"
#include<iostream>
using std::cout;

Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_to_stn;
	pds_left = int(lbs) % Lbs_to_stn + lbs - int(lbs);
	pounds = lbs;
}
//construct Stonewt object from stone ,double value
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_to_stn + lbs - int(lbs);

}
//show weights in pounds
void Stonewt::show_lbs()const
{
	cout << pounds << "pounds.\n";
}
//show weight in stones
void Stonewt::show_stn()const
{
	cout << stone << "stones" << pds_left << "pounds.\n";
}
Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt()//destructor
{

}