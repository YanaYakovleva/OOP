#include "String.h"
#include "DateString.h"
#include "OctalString.h"
using namespace std;

void main()
{
	system("color F0");
	cout << "DateString" << endl << "---------------------------------------------------" << endl;

	DateString *p = NULL, *a = NULL;
	try
	{
		p = new DateString("asdf", 10, 2, 2017);
		cout << "Constructor with parameters: \"asdf\", 10, 2, 2017" << endl;
		p->show();
		cout << "---------------------------------------------------" << endl;
		cout << "Constructor with parameters: \"a\", 12, 33, 2017" << endl;
		a = new DateString("a", 12, 33, 2017);
		a->show();
	}
	catch (InvalidDateException ex)
	{
		cerr << ex.what();
		cout << "---------------------------------------------------" << endl;
	}
	DateString b;
	cout << "The default constructor" << endl;
	b.show();
	cout << "---------------------------------------------------" << endl;
	DateString c("abc");
	cout << "Constructor with parameters \"abc\"" << endl;
	c.show();
	cout << "---------------------------------------------------" << endl;
	b = *p;
	cout << "Operator \"=\" " << endl << "b = p" << endl;
	b.show();
	cout << "---------------------------------------------------" << endl;
	cout << "To change the day on 45, the month on 4, the year on 2017 " << endl;
	cout << "Before change" << endl;
	b.show();
	try
	{
		b.setDay(45);
	}
	catch (InvalidDateException ex1)
	{
		cerr << ex1.what();
	}
	try
	{
		b.setMonth(4);
	}
	catch (InvalidDateException ex2)
	{
		cerr << ex2.what();
	}try
	{
		b.setYear(2017);
	}
	catch (InvalidDateException ex3)
	{
		cerr << ex3.what();
	}
	cout << "After change " << endl;
    b.show();
	cout << "---------------------------------------------------" << endl;
	cout << "Get day, month and year" << endl;
	cout << "day = " << b.getDay() << endl << "month = " << b.getMonth() << endl << "year = " << b.getYear() << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "OctalString" << endl << "---------------------------------------------------" << endl;
	OctalString *e = NULL;
	try
	{
		cout << "Constructor with parameters: 190" << endl;
		e = new OctalString(190);
		e->show();
	}
	catch (InvalidOctalException ex)
	{
		cerr << ex.what();
		cout << "---------------------------------------------------" << endl;
	}
	try
	{
		cout << "Constructor with parameters: 156" << endl;
		e = new OctalString(156);
		e->show();
		cout << "---------------------------------------------------" << endl;
	}
	catch (InvalidOctalException ex)
	{
		cerr << ex.what();
	}
	cout << "To change the number on 45 " << endl;
	cout << "Before change" << endl;
	e -> show();
	try
	{
		e -> setOctalNumber(45);
		cout << "After change " << endl;
		e->show();
		cout << "---------------------------------------------------" << endl;
	}
	catch (InvalidOctalException ex)
	{
		cerr << ex.what();
	}
	OctalString g = *e;
	cout << "Operator \"=\"" << endl;
	g.show();
	cout << "---------------------------------------------------" << endl;
	cout << "Get number" << endl << "number = " << g.getOctalNumber() << endl;
	cout << "---------------------------------------------------" << endl;
	if (p!=NULL)
		delete p;
	if (a != NULL)
		delete a;
	if (e != NULL)
		delete e;
	system("pause");
}