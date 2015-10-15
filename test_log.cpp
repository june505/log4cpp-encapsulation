#define LOG4CPP
#include "Mylog.h"
#include "func.h"
#include <iostream>
int main(void)
{
	LOG_ERROR("hello,world!");
	LOG_WARN("hello,world");
	LOG_INFO("hello,world");
	LOG_DEBUG("hello,world");
	func();
	return 0;
}
