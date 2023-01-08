#pragma once
#ifndef STONE_
#define STONE_
class Stonewt
{
public:

	Stonewt();//default constructor
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	~Stonewt();

private:
	enum
	{
		Lbs_to_stn = 14
	};
	int stone;//whole stone
	double pds_left;//fractional pounds
	double pounds;//entire weight in pounds
};


#endif // !STONE_
