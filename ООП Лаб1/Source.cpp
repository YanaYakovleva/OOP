#include "String.h"
#include "DateString.h"
#include "OctalString.h"
using namespace std;

void main()
{
	OctalString s(123);
	DateString *p = NULL;
	try
	{
		p = new DateString("xds", 10, 2, 2017);

	}
	catch (InvalidDateException ex)
	{
		cerr << ex.what();
	}
	DateString b;
	b = *p;
	try
	{
		b.setDay(12);
		b.setMonth(13);
    }
	catch (InvalidDateException ex)
	{
		cerr << ex.what();
	}
    b.show();
	
	OctalString *e = NULL;
	try
	{
		e = new OctalString(190);
		e->show();
	}
	catch (InvalidOctalException ex)
	{
		cerr << ex.what();
	}
	
	try
	{
		e->setOctalNumber(129);
		e->show();
	}
	catch (InvalidOctalException ex)
	{
		cerr << ex.what();
	}
	
	OctalString a = s;
	a.show();
	


	delete p;
	system("pause");
}