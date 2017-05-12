#include "String.h"
using namespace std;

void main()
{
	String a("abc");
	String b("cde");
	String c = a + b;
	c.show();

	system("pause");
}