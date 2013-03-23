#pragma once

#include <ILib.h>

class Framework : public ILib
{
public:
    Framework(IBroker* Broker);
    ~Framework();
private:
    IBroker* m_Broker;

};
