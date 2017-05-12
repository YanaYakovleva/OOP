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

	String& setString(char* str);//изменение строки
	void show();//вывод строки на экран
	int search(String);//поиск подстроки в строке
	String replace(String, String);//замена подстроки на подстроку
	int length();//получение длины
	String concat(String);//слияние двух строк
	char& getSymbol(int);//получить i-ый символ
	String to_apper();//перевети строку в верхний регистр
	String to_lower();//перевести строку в нижний регистр
	const char* c_str();//получить строку
	static int getCount();

	String operator +(const String& rhs);

};
