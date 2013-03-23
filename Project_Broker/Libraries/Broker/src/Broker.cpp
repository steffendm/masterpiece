#include "PBroker.h"

Broker::Broker()
{

}

Broker::~Broker()
{

}

void Broker::RegisterInterface(const std::string &LibName, ILib* lib)
{
    if(lib != NULL)
        m_Libs[LibName] = lib;
}

ILib* Broker::QueryInterface(const std::string& LibName)
{
    if(m_Libs.find(LibName) != m_Libs.end())
    {
        return m_Libs[LibName];
    }
    else
        return NULL;
}
