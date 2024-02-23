
#include <iostream>
#include "Str.h"

using namespace std;

void Test(Str s) {

}

int main()
{
	Str s = "123";

	cout << s << " _ " << strlen(s) << " _ " << sizeof((const char*)s) << endl; // sizeof(s) = 8 ??? 
	Test(s);
	cout << s << " _ " << strlen(s) << " _ " << sizeof(s) << endl; // sizeof(s) = 8 ??? 

	Str t;
	t = s;
	t = s = t = ":O";
	s += "_ZZZ";
	cout << t+"...zzz...zzz" << " " << s << endl;
}
