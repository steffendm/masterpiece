#pragma once

#include "IBroker.h"
#include <map>

class Broker : public IBroker
{
public:
    ~Broker();

    void RegisterInterface(const std::string& LibName, ILib *lib);

    ILib* QueryInterface(const std::string& LibName);

    static IBroker* Make() { return new Broker;}

private:
    Broker();

    std::map<std::string,ILib*> m_Libs;

};



