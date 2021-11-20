#include "../std_lib_facilities.h"

struct Date{
	int y, m, d;
};
void initdate(Date& date, int y, int m, int d){
	if (y>0)
		date.y=y;
	else
		error("invalid year");
	if (m<12&&m>0)
		date.m=m;
	else
		error("invalid month");
	if (d<31&&d>0)
		date.d=d;
	else
		error("invalid day");
}
void add_day(Date& date, int n){
	date.d+=n;
	if (date.d>31){
		date.m++;
		date.d-=31;
		if (date.m>12){
			date.y++;
			date.m-=12;
		}
	}
}
int main(){
	Date today;
	today.y=1978;
	today.m=6;
	today.d=25;

	Date tomorrow;
	initdate(tomorrow,1978,6,25);
	add_day(tomorrow,7);

	cout<<today.y<<'.'<<today.m<<'.'<<today.d<<'\n';
	cout<<tomorrow.y<<'.'<<tomorrow.m<<'.'<<tomorrow.d<<'\n';
	return 0;
}