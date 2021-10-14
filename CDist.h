#pragma once


class CDist{

private:
	int x;
	int y;

public:
    CDist();
    CDist(int value_x, int value_y);
    int Get_x();
    int Get_y();
    void Set_xy(int value_x, int value_y);
    void print();
    CDist operator =(const CDist &other);

};
