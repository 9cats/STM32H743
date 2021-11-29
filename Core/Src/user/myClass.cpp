/* Standard includes. */
#include "string.h"
#include "iostream"
#include "sstream"
using namespace std;

/* User includes */
#include "myClass.hpp"

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
