#include "CPoint + CDist.h"


CPoint operator +(CPoint M, CDist MN){

    M.Set_xy(M.Get_x() + MN.Get_x(), M.Get_y() + MN.Get_y());
    return M;
};

CPoint operator +(CDist MN, CPoint M){

    M.Set_xy(M.Get_x() + MN.Get_x(), M.Get_y() + MN.Get_y());
    return M;
};

CDist  operator -(CPoint M, CPoint N) {
	CDist MN;
	MN.Set_xy(M.Get_x() - N.Get_x(), M.Get_y() - N.Get_y());
	return MN;
};


