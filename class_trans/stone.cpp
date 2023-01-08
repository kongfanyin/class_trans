#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"stonewt.h"
#include<string>
#include<fstream>
using std::cout;

void display(const Stonewt & st, int n);
int main(char argc, char** argv)
{
	Stonewt incog = 275;//use constructor to initialize
	Stonewt wolfe(285.7);//same as wolfe=285.7
	Stonewt taft(21, 8);
	cout << "the celebrity weighed";
	incog.show_stn();
	cout << "the detective weighed";
	wolfe.show_stn();
	cout << "the president weiged";
	taft.show_lbs();
	incog = 276.8;//use constructor for conversion
	taft = 325;//same as taft=Stonewt(325);
	cout << "after dinner ,the celebrity weighed";
	incog.show_stn();
	cout << "after dinner ,the president weighed";
	taft.show_lbs();
	display(taft, 2);
	cout << "the wrestler weighed even more.\n";
	display(422, 2);
	cout << "No stone left unearned";

	return 0;
}
void display(const Stonewt & st, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << "Wow!";
		st.show_stn();
	}
}