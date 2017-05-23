#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <ostream>
#include <iostream>
#include <fstream>


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

	//���������� ����������

    String operator +(const String& rhs);//���������� ��������� ��������
	String& operator ++();//���������� ��������� ���������� ��������� 
	String operator ++(int); //���������� ��������� ����������� ���������
	String& operator --();//���������� ��������� ���������� ��������� 
	String operator -- (int);//���������� ��������� ����������� ���������

	//���������� ���������� ����������

	bool operator == (const String&);//���������� ��������� ���������
	bool operator < (const String&);//���������� ��������� ������

	//���������� ����������� ����������

	String& operator = (String& rhs);//���������� ��������� ������������
	operator const char*();
	friend std::ostream& operator << (std::ostream& out, String& obj);
	friend std::istream& operator >> (std::istream& in, String& obj);
	friend std::ofstream& operator << (std::ofstream& ofs, String& obj);
	friend std::ifstream& operator >> (std::ifstream& ifs, String& obj);
};

