#pragma once

#include "ILib.h"
#include <iostream>

class IBroker
{
public:
    virtual ~IBroker(){}
    virtual void RegisterInterface(std::string& LibName, ILib* lib) = 0;

    ILib* QueryInterface(std::string& LibName);


};
