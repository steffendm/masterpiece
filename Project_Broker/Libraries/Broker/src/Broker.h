#include "IBroker.h"

class Broker : public IBroker
{
    Broker();
    ~Broker();

    void RegisterInterface();
    void QuerryInterface();

};
