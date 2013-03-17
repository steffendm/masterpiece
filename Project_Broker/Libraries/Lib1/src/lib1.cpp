#include "lib1.h"
#include <iostream>

Lib1::Lib1(int i)
    :m_i(i)
{

}

Lib1::~Lib1()
{

}

int Lib1::test()
{

    return 2*m_i;
}
