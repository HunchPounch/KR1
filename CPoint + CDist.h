#pragma once
#include "CPoint.h"
#include "CDist.h"


CPoint operator +(CPoint M, CDist MN);
CPoint operator +(CDist MN, CPoint M);
CDist  operator -(CPoint M, CPoint N);
