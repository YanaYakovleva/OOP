#include "String.h"
#include "DateString.h"
#include "OctalString.h"
#include "Template.h"
#include "Header.h"
using namespace std;

void main()
{
	List a;
	a.add(1);
	a.add(2);
	a.add(3);
	a.add(4);
	a.show();
	a.remove(3);
	a.show();
	a.remove(1);
	a.show();
	a.remove(4);
	a.show();



	/*List <int> my_List;
	my_List.add(12);
	my_List.add(13);
	my_List.add(03);
	my_List.show();
	my_List.remove(0);
	my_List.show();

	List <String> my_List2;
	my_List2.add("das");
	my_List2.add("fgfd");
	my_List2.add("dfdsf");
	my_List2.show();*/

	system("pause");
}