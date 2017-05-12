#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class String
{
	char* str;
	int len;
	static int count;

public:
	String();
	String(char *s);
	String(const String &string);
	~String();

	String& setString(char* str);//��������� ������
	void show();//����� ������ �� �����
	int search(String);//����� ��������� � ������
	String replace(String, String);//������ ��������� �� ���������
	int length();//��������� �����
	String concat(String);//������� ���� �����
	char& getSymbol(int);//�������� i-�� ������
	String to_apper();//�������� ������ � ������� �������
	String to_lower();//��������� ������ � ������ �������
	const char* c_str();//�������� ������
	static int getCount();

	String operator +(const String& rhs);

};
