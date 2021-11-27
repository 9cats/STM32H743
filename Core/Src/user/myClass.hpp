#ifndef __CLASS_H
#define __CLASS_H

class vChar{
public:
	char *       *str;
	stringstream *sstr;
	vChar(char** str,stringstream* sstr);
	vChar& operator <<(const char* str);
	vChar& operator <<(char* str);
	vChar& operator <<( int32_t   num);
	vChar& operator <<(uint32_t   num);
	vChar& operator <<(float num);
};

char* operator <<(char * &str, stringstream &sstr);
char* operator >>(stringstream &sstr, char * &str);

class cString {
public:
	char const *str;
	int  const max;
	int len;
};

#endif
