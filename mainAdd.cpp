#include"Address.h"

int main()
{
	Address add1,add2;
	add1.Accept();
	add2.Accept();
	add1.Display();
	add2.Display();
	add1==add2;

	return 0;
}
