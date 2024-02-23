
#include <iostream>
using namespace std;

void string_copy(char* d, char* s);

int main()
{
	char str[] = "Hello!";
	cout << str << endl;
	// сравнение длин массива и строки
	cout << strlen(str) << ' ' << sizeof(str) << endl;

	// копирование
	char t[32];
	for (char* pd = t, *ps = str; *pd++ = *ps++;);
	cout << t << endl;

	// "понятное" копирование
	char t1[32];
	for (char* pd = t1, *ps = str; *pd; pd++) {
		*pd = *ps;
		ps++;
	}
	cout << t1 << endl;

	char t2[32];
	string_copy(t2, str);
	cout << t2 << endl;
}

void string_copy(char* d, char* s) {
	for (char* pd = d, *ps = s; *pd++ = *ps++;);
}
