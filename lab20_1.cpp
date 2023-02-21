#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
    double mxx=0,mxn=0,myx=0,myn=0,x=0,y=0,rec=0;
    if((r1.x+r1.w)>r2.x&&(r1.y-r1.h)<r2.y){
        if(r1.x>r2.x) mxx=r1.x; else mxx=r2.x;
        if((r1.x+r1.w)<(r2.x+r2.w)) mxn=r1.x+r1.w; else mxn=r2.x+r2.w;
        if(r1.y>r2.y) myx=r2.y; else myx=r1.y;
        if((r1.y-r1.h)<(r2.y-r2.h)) myn=r2.y-r2.h; else myn=r1.y-r1.h;
        x = mxn-mxx; y = myx-myn; rec =x*y;
    }
    return rec;
}
