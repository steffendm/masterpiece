#include "PBroker.h"
#include <typeinfo>
#include "lib1.h"

Broker::Broker()
{

}

Broker::~Broker()
{

}

void Broker::RegisterInterface(std::string &LibName, ILib &lib)
{

    m_Libs[LibName] = lib;

}

ILib* Broker::QueryInterface(std::string& LibName)
{

}



IBroker* Broker::Make()
{
    return new Broker();
}
