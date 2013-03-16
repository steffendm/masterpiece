#pragma once

class IBroker
{
public:
    virtual ~IBroker(){}
    virtual void RegisterInterface() = 0;
    virtual void QuerryInterface() = 0;
};
