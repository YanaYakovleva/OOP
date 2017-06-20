#include "String.h"
#include "DateString.h"
#include "OctalString.h"
#include "List.h"
using namespace std;

void main()
{
	List <int> my_List;
	my_List.add(12);
	my_List.add(13);
	my_List.add(03);
	cout << "Add 12, 13, 3" << endl;
	my_List.show();
	my_List.remove(13);
	cout << "Delete 13" << endl;
	my_List.show();
	cout << "                                 " << endl;
	List <String> my_List2;
	my_List2.add("abc");
	my_List2.add("cde");
	my_List2.add("fgh");
	cout << "Add abc, cde, fgh" << endl;
	my_List2.show();
	my_List2.remove("abc");
	cout << "Delete abc" << endl;
	my_List2.show();

	system("pause");
}