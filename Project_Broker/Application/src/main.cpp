#include <iostream>
#include "PBroker.h"
#include "Framework.h"

using namespace std;

int main()
{
    IBroker* broker = Broker::Make();

    Framework FW(broker);

    Framework *FW2 = QueryBroker<Framework>(*broker,"FIFramework");

    return 0;

}
