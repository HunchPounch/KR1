#include "Header.h"
#include "test.h"

CPoint FirstFunction() {
	CPoint point;
	CDist distance;
	int value_x;
	int value_y;
	cout << "Enter point:" << endl;
	cin >> value_x >> value_y;
	point.Set_xy(value_x, value_y);
	cout << "Enter distance:" << endl;
	cin >> value_x >> value_y;
	distance.Set_xy(value_x, value_y);
	point = point + distance;
	return point;
}

CDist SecondFunction() {
	CDist distance;
	CPoint point_1;
	CPoint point_2;
	int value_x;
	int value_y;
	cout << "Enter the first point:" << endl;
	cin >> value_x >> value_y;
	point_1.Set_xy(value_x, value_y);
	cout << "Enter the second point:" << endl;
	cin >> value_x >> value_y;
	point_2.Set_xy(value_x, value_y);
	distance = point_2 - point_1;

	return distance;
}


int main()
{
    if(main_test() == 1){
        cout << "tests not passed" << endl << endl;
        return 1;
    }
    else cout << "tests passed" << endl << endl;
    CPoint point;
    CDist distance;
    int STOP = 0;
    int num =0;
    while(STOP == 0){

        cout << "Select next number:" << endl;
        cout << "1 --- sum of point and vector or sum of vector and point" << endl;
        cout << "2 --- distance between points" << endl;
        cout << "3 --- output" << endl << endl;

        cin >> num;
        if(num == 1){
            point = FirstFunction();
            point.print();
            continue;
        }
        if(num == 2){
            distance = SecondFunction();
            distance.print();
            continue;
        }
        if(num == 3){
            break;
        }
        if(num != 1 && num != 2 && num != 3){
            cout << "incorrect input";
            break;
        }


    }

    return 0;
}
