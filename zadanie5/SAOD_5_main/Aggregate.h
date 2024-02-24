#pragma once

#include "Test.h"

class Aggregate
{
private:
	Test* test = new Test;

public:
	Aggregate() {
		cout << "Aggr +| " << "  Test entities count:  " << test->entityCount << endl;
	}

	~Aggregate() {
		delete test;
		cout << "Aggr  |-" << "  Test entities count:  " << test->entityCount << endl;
	}
};

