
     #include "std_lib_facilities.h"

struct Date 
{
	int y;
	int m;
	int d;
};

void init_day(Date& dd, int y, int m, int d)
{
	if(y>0)
		dd.y=y;
	else
		error("Invalid year.");

	if(m<=12 && m>0)
		dd.m=m;
	else
		error("Invalid month.");

	if(d<=31 && d>0)
		dd.d=d;
	else
		error("Invalid day.");
}

void add_day(Date& dd, int n)
{
	dd.d+=n;
	if(dd.d>31)
	{
		dd.m++;
		dd.d-=31;
	}
	if(dd.m>12)
	{
		dd.y++;
		dd.m-=12;
	}

	
}

ostream& operator<<(ostream& os, const Date& d)
{
return os << '(' << d.y<< ',' << d.m<< ',' << d.d << ')';
}

void f()
{
	Date today;
	init_day(today, 1999, 12, 31);
	Date tomorrow=today;
	add_day(tomorrow,1);
	cout<<"Today: "<< today<<"\n"<<"Tomorrow: "<<tomorrow<<"\n";
	//Date invalid;
	//init_day(invalid,2004,13,-5);
}

int main()
try
{
	f();
	return 0;
}
catch(exception& e)
{
	cerr <<e.what()<<"\n";
	return 1;
}