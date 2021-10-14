#include "test.h"
#include "Header.h"

int test1(){
    CPoint point(0, 0);
	CDist distance(1, 1);
	point = point + distance;
	if(point.Get_x() == 1 && point.Get_y() == 1){
        cout << "test1 passed" << endl;
        return 0;
	}
	else {
        cout << "test1 not passed" << endl;
        return 1;
	}
}

int test2(){
    CPoint point1(0, 0);
	CPoint point2(1, 1);
	CDist distance;
	distance = point2 - point1;
	if(distance.Get_x() == 1 && distance.Get_y() == 1){
        cout << "test2 passed" << endl;
        return 0;
	}
	else {
        cout << "test2 not passed" << endl;
        return 1;
	}
}

int main_test(){
    if(test1() + test2() == 0){
        return 0;
    }
    else return 1;
}

