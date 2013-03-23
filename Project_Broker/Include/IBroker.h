#pragma once

#include <iostream>

class ILib;

class IBroker
{
public:
    virtual ~IBroker(){}

    virtual void RegisterInterface(const std::string& LibName, ILib* lib) = 0;

    virtual ILib* QueryInterface(const std::string& LibName) = 0;
};
