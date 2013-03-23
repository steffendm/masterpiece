#include "Framework.h"

Framework::Framework(IBroker* Broker)
    :m_Broker(Broker)
{
    Broker->RegisterInterface("IFramework",this);
}

Framework::~Framework()
{

}
