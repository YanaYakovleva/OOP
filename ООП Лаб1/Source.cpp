#include "String.h"
using namespace std;

void main()
{
	system("color F0");
	String a("abc");
	a.show();
	cout << "Count = " << String::getCount() << endl;
	a.setString("AbC deF");
	cout << "String after change" << endl;
	a.show();
	int index = a.search("de");
	cout << "First occurrrence index \"de\"= " << index << endl;
	int length = a.length();
	cout << "Length string = " << length << endl;
	String b = a.concat("ghk");
	cout << "String before concatenation: " << endl << a.c_str() << endl;
	cout << "String after concatenation with \"ghk\": " << endl << b.c_str() << endl;
	cout << "Get symbol #2:" << a.getSymbol(2) << endl;
	String c = a.to_apper();
	String d = a.to_lower();
	cout << "String a: " << endl << a.c_str() << endl;
	cout << "String after to_apper: " << endl << c.c_str() << endl;
	cout << "String after to_lower: " << endl << d.c_str() << endl;
	String e = a.replace("bC", "NNN");
	cout << "String after replace \"bC\" to \"NNN\": " << endl << e.c_str() << endl;

	system("pause");
}