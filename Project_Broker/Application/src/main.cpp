#include <iostream>
#include "IBroker.h"
#include "PBroker.h"

#include "lib1.h"


using namespace std;

int main()
{
    IBroker* broker = Broker::Make();

    ILib *test = new Lib1(4);
    std::string bluh = "Lib1";

    broker->RegisterInterface(bluh, new Lib1(4));

    Lib1 *test2 = ILib::QueryBroker<Lib1>(*broker,bluh);

    cout << test2->test() << endl;

    return 0;

}
