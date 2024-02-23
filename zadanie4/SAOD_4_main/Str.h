#pragma once
class Str
{
private:
	char* zStr;

	inline void CopyFromZStr(const char* s) {
		zStr = new char[strlen(s) + 1]; // strlen(s)+1 == sizeof(s) ?!?!??
		strcpy_s(zStr, strlen(s) + 1, s);
	}
public:
	Str(const char* s = 0) {
		if (s) {
			CopyFromZStr(s);
		}
		else
			zStr = new char[1] {0};
	}


	Str(const Str& s) //Константная ссылка на объект
	{
		CopyFromZStr(s.zStr);
	}

	~Str() {
		delete [] zStr;
	}


	const Str& operator = (const Str& s) //Константная ссылка на объект
	{
		if (&s == this) return *this;
		delete[] zStr;	 
		CopyFromZStr(s.zStr);
		return *this;
	}


	Str& operator +=(const char* s) {

		int newLen = strlen(zStr) + strlen(s) + 1;

		char* oldStr = new char[strlen(zStr) + 1];
		strcpy_s(oldStr, strlen(zStr) + 1 , zStr);

		delete [] zStr;
		zStr = new char[newLen];

		for (int i = 0; i < newLen; i++)
			zStr[i] = i < strlen(oldStr) ? oldStr[i] : s[i - strlen(oldStr)];

		delete[] oldStr;

		return *this;
	}

	Str operator +(const char* s) const {

		int newLen = strlen(zStr) + strlen(s) + 1;

		char* resultZStr = new char[newLen];

		for (int i = 0; i < newLen; i++)
			resultZStr[i] = i < strlen(zStr) ? zStr[i] : s[i - strlen(zStr)];

		Str resultStr(resultZStr);
		delete[] resultZStr;

		return resultStr;
	}


	operator const char* ()const { return zStr; }
};

