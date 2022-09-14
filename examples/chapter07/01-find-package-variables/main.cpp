//#include "message.pb.h"
//#include <fstream>
#include <pxr/usd/usd/stage.h>
#include <iostream>

using namespace std;

int main() {
    auto stage = pxr::UsdStage::CreateNew("hello.usda");
    stage->GetRootLayer()->Save();
//    Message m;
//    m.set_id(123);
//    m.PrintDebugString();

//    fstream fo("./hello.data", ios::binary | ios::out);
//    m.SerializeToOstream(&fo);
//    fo.close();
    cout << "hello" << endl;
    return 0;
}
