#pragma once

#include "IBroker.h"
#include <map>

class Broker : public IBroker
{
public:
    ~Broker();

    void RegisterInterface(std::string& LibName, ILib *lib);

    ILib* QueryInterface(std::string& LibName);

    static IBroker* Make() { return new Broker;}

private:
    Broker();

    std::map<std::string,ILib*> m_Libs;

};



