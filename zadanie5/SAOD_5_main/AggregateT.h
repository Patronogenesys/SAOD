#pragma once


template <typename T> class AggregateT { 
private:
	T* obj = new T;

public:
	AggregateT<T>() {
		cout << "AggrT+| " << endl;
	}

	~AggregateT<T>() {
		delete obj;
		cout << "AggrT |-" << endl;
	}
};