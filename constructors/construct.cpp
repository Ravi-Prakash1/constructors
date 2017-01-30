#include<iostream>
using namespace std;

class constructdatetime
{
private:
	int dd,mm,yy;
public:

	//constructdatetime()
	//{
	//	dd=0;mm=0,yy=0;
	//}

	constructdatetime(int day, int mon, int year)
	{
		dd=day;mm=mon;yy=year;
	}

	constructdatetime(int day=0)
	{
		dd=day;
		cout<<int();
	}
};

void main()
{
	constructdatetime dateobj1;
	constructdatetime dateobj2(12,12,2014);	
	constructdatetime dateobj3(10);
	constructdatetime dateobj4 = 10;
    //constructdatetime dateobj5 = 10,1,1;
	constructdatetime dateobj6();
	cin.ignore();
}
