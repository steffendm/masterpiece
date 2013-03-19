#pragma once

#include <iostream>

class ILib;

class IBroker
{
public:
    virtual ~IBroker(){}

    virtual void RegisterInterface(std::string& LibName, ILib* lib) = 0;

    virtual ILib* QueryInterface(std::string& LibName) = 0;
};
