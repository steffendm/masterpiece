#pragma once

#include "IBroker.h"
#include <map>

class Broker : public IBroker
{
public:

    Broker();

    ~Broker();

    void RegisterInterface(std::string& LibName, ILib *lib);

    ILib* QueryInterface(std::string& LibName);

    static IBroker* Make();

private:
    std::map<std::string,ILib> m_Libs;

};



