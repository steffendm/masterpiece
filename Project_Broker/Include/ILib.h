#pragma once

#include "IBroker.h"

class ILib
{
public:
    virtual ~ILib(){}

    template<class T>
    static T* QueryBroker(IBroker& Broker, std::string LibName)
    {
        return dynamic_cast<T*>(Broker.QueryInterface(LibName));
    }
};
