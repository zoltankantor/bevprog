#include "my.h"
// Nem tartalmazza: #include "std_lib_facilities.h"
#include "my.cpp"
#include <iostream>

int main()
{
	foo = 7; //Nem kell int-elni, mert már létezik a my.h-ban.

	print_foo();

	print(99);

	return 0;
}