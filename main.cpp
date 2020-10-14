#include "header/infor.h"

int main()
{
    cout << "Hello std::Set" << endl;

    Info rst1("rst1", "rstObj1", 1);
    Info rst2("rst2", "rstObj2", 2);
    Info rst3("rst1", "rstObj3", 3);
    Info rst4("rst1", "rstObj1", 4);
    Info rst5("rst1", "rstObj2", 1);
    Info rst6("rst2", "rstObj2", 1);

    std::set<Info,InfoCmp2> resetSet;

    resetSet.insert(rst1);
    resetSet.insert(rst2);
    resetSet.insert(rst3);
    resetSet.insert(rst4);
    resetSet.insert(rst5);
    resetSet.insert(rst6);
    resetSet.insert(rst1);
    resetSet.insert(rst2);
    resetSet.insert(rst3);
    resetSet.insert(rst4);
    resetSet.insert(rst5);
    resetSet.insert(rst6);



    for (auto& info: resetSet) {
        cout << "info name : " << info.getName().c_str() << " - " << info.getObjName().c_str() << " - " << info.getDomain() << endl;
    }


    return 0;
}
