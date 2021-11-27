/* Standard includes. */
#include "string.h"
#include "iostream"
#include "sstream"
using namespace std;

/* User includes */
#include "myClass.hpp"

/* Variable Char Array */
vChar::vChar(char** str,stringstream* sstr) {
	this->sstr = sstr;
	this->str  = str ;
}

vChar& vChar::operator <<(const char* str) {
	*(this->sstr) << str;
	int length = (*(this->sstr)).str().length();
	*(this->sstr) >> *(this->str);
	this->str += length;
	return *this;
}
vChar & vChar::operator <<(char* str) {
	*(this->sstr) << str;
	*(this->sstr) >> *(this->str);

	return *this;
}
vChar & vChar::operator <<(int32_t str) {
	*(this->sstr) << str;
	*(this->sstr) >> *(this->str);

	return *this;
}
vChar & vChar::operator <<(uint32_t str) {
	*(this->sstr) << str;
	*(this->sstr) >> *(this->str);

	return *this;
}
vChar & vChar::operator <<(float str) {
	*(this->sstr) << str;
	*(this->sstr) >> *(this->str);

	return *this;
}

/* Reload << with char* and stringstream */
char* operator <<(char * &str,stringstream &sstr)
{
	strcpy(str, sstr.str().c_str());
	return str;
}

char* operator >>(stringstream &sstr, char * &str)
{
	strcpy(str, sstr.str().c_str());
	return str;
}
