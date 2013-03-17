#pragma once

#include "ILib.h"

class Lib1 : public ILib
{
public:
    Lib1(int i );
    ~Lib1();

    int test();
private:
    int m_i;
};
