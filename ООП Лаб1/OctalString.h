#pragma once
#include "String.h"
#include "Exception.h"

class OctalString :public String
{
	int number;
	bool check(int);//�������� �������� �� ������������
	void i_to_a(int);//�� int � char*
public:
	OctalString();
	OctalString(int);
	~OctalString();

	void show();
	const int getOctalNumber();
	OctalString& setOctalNumber(int);
	OctalString& operator = (OctalString& rhs);
	

};

