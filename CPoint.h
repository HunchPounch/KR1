#pragma once


class CPoint {

private:
    int x;
    int y;

public:
    CPoint(int value_x, int value_y);
    CPoint();
    int Get_x();
    int Get_y();
    void Set_xy(int value_x, int value_y);
    void print();

    CPoint& operator =(const CPoint &other);

};









