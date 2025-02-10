#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double a,b;

	a = min(R1.x+R1.w,R2.x+R2.w)-max(R2.x,R1.x);
    b = min(R1.y,R2.y)-max(R2.y-R2.h,R1.y-R1.h);

	if(a>0&&b>0){
		return a*b;
	}
	else 
		return 0;






}