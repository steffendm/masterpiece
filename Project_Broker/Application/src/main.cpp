#include <iostream>
#include "IBroker.h"
#include "PBroker.h"

#include "lib1.h"


using namespace std;

template <class T>
class QueriedObject {

  public:
    QueriedObject()
    {

    }
};


int main()
{
    IBroker* broker = Broker::Make();

    ILib *test = new Lib1(5);
    std::string bluh = "Lib1";

    broker->RegisterInterface(bluh, *test);

    Lib1* test2;// = (Lib1*)test;

    QueriedObject<Lib1*> qtest = broker->QueryInterface(bluh);

    dynamic_cast

    cout << test2->test() << endl;

    //test2 = broker->QueryInterface2<Lib1>(bluh);


   // broker->QueryInterface();


    return 0;

}
