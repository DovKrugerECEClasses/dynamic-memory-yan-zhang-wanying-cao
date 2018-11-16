#include <iostream>
#include <stdint.h>
#include <cstring>
using namespace std;
class String {
private:
	uint32_t capacity;
	uint32_t len;
	char* s;
	uint32_t stringlen(const char* str) {
		uint32_t count = 0;
		while (*str++ != '\0')
			count++;
		return count;
	}
	void checkGrow(uint32_t newLen){
		if(newLen > capacity){
			capacity= newLen*2;// grow allocate double the size of newLen
			const char * old =s;
			s = ;
		}
	}
public:
  String();
	void operator +=(const char str[]){}
	void operator +=(const String &s){
		checkGrow(len + s.len);
	}
	String(const char str[]);
	
	String(const char str[], uint32_t mult);
	~String();

	//copy constructor
	String(const String& orig);
	String& operator =(const String& orig);
	char  operator [](const uint32_t pos)const;
	char& operator [](uint32_t pos);
	friend ostream& operator<<(ostream& s, const String& str) {
	}
};
