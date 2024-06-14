#include  "MyNS.h"
#include  "MyNNS.h"

int main()
{
    MyNNS::MyClass obj1;
    obj1.showInfo2();

    MyNS::MyClass obj2;
    obj2.showInfo();

    using namespace MyNS;
    MyClass obj3;
    obj3.showInfo();

    using namespace MyNNS;
   // MyClass obj4;
}
