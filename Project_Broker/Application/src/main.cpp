#include <iostream>
#include "IBroker.h"
#include "PBroker.h"

#include "lib1.h"


using namespace std;

int main()
{
    Broker broker;

    ILib *test;
    std::string bluh = "Lib1";

    broker.RegisterInterface(bluh, new Lib1(4));
    test = broker.QueryInterface(bluh);

    cout << ((Lib1*)test)->test() << endl;

    return 0;

}
