#include "CPoint.h"
#include <iostream>
using namespace std;

CPoint::CPoint(int value_x, int value_y) {
	x = value_x;
	y = value_y;
}
CPoint::CPoint() {
	x = 0;
	y = 0;
}

int CPoint::Get_x() {
	return x;
}
int CPoint::Get_y() {
	return y;
}

void CPoint::Set_xy(int value_x, int value_y) {
	x = value_x;
	y = value_y;
}

void CPoint::print(){
    cout << "Required point: " << "(" << x << "," << y << ")" << endl << endl;
}

CPoint& CPoint::operator =(const CPoint &other) {
	this->x = other.x;
	this->y = other.y;

	return *this;
}



