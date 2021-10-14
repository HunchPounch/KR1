#include "CDist.h"
#include <iostream>
using namespace std;

CDist::CDist(int value_x, int value_y) {
	x = value_x;
	y = value_y;
}

CDist::CDist() {
	x = 0;
	y = 0;
}

int CDist::Get_x() {
	return x;
}
int CDist::Get_y() {
	return y;
}

void CDist::Set_xy(int value_x, int value_y) {
	x = value_x;
	y = value_y;
}

void CDist::print(){
    cout << "Required distance: " << "(" << x << "," << y << ")" << endl << endl;
}

CDist CDist:: operator =(const CDist &other) {
	this->x = other.x;
	this->y = other.y;

	return *this;
}



