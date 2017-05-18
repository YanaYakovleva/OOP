#include "String.h"
using namespace std;

void main()
{
	String a, b, c, d, e, f, g;
	ifstream ifs("text.txt");
	ifs >> a;
	ifs >> b;
	ifs.close();
	cout << "Strings from the file" << endl;
	cout << "a: " << a << endl << "b: " << b << endl;
	if (a < b)
		cout << "a<b" << endl;
	else
		cout << "a>=b" << endl;
	c = a + b;
	cout << "c = a + b = " << c << endl;
	d = (a++) + (b--);
	cout << "d = (a++) + (b--)=  " << d << " a: " << a << " b: " << b << endl;
	e = (--a) + (++b);
	cout << "e = (--a) + (++b)= " << e << " a: " << a << " b: " << b << endl;
	if (a < b)
		cout << "a<b" << endl;
	else
		cout << "a>=b" << endl;

	cout << "f: ";
	cin >> f;
	cout << "g: ";
	cin >> g;

	if (f == g)
		cout << "f == g" << endl;
	else
		cout << "f != g" << endl;
	const char *r = (const char*)g;

	cout << "Operation const char/*:" << endl << "const char *r = (const char*)g = " << r << endl;

	ofstream ofs("text.txt");
	ofs << a << endl << b << endl << c << endl << d << endl << e << endl << f << endl << g << endl << r << endl;
	ofs.close();


	system("pause");
}