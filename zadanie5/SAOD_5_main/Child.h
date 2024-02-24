#pragma once
#include "Test.h"
class Child :
    public Test
{
public:
    Child() {
        //entityCount++;
        cout << "Child+| " << "  Test entities count:  " << entityCount << endl;
    }
    
    ~Child() {
        //entityCount++;
        cout << "Child |-" << "  Test entities count:  " << entityCount << endl;
    }
};

