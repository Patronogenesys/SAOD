#pragma once

#include <iostream>

using namespace std;

class Test
{
public:

	static int entityCount;

	Test() {
		entityCount++;
		cout << "Test +| " << "  Test entities count:  " << entityCount << endl;
	}

	Test(const Test& from) {
		entityCount++;
		cout << "Test c| " << "  Test entities count:  " << entityCount << endl;
	}

	~Test() {
		entityCount--;
		cout << "Test  |-" << "  Test entities count:  "<< entityCount << endl;
	}
};

