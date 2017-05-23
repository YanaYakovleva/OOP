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

	//перегрузка операторов

    String operator +(const String& rhs);//перегрузка оператора сложения
	String& operator ++();//перегрузка оператора префиксный инкремент 
	String operator ++(int); //перегрузка оператора постфиксный инкремент
	String& operator --();//перегрузка оператора префиксный декремент 
	String operator -- (int);//перегрузка оператора постфиксный декремент

	//перегрузка логических операторов

	bool operator == (const String&);//перегрузка оператора сравнения
	bool operator < (const String&);//перегрузка оператора меньше

	//перегрузка специальных операторов

	String& operator = (String& rhs);//перегрузка оператора присваивания
	operator const char*();
	friend std::ostream& operator << (std::ostream& out, String& obj);
	friend std::istream& operator >> (std::istream& in, String& obj);
	friend std::ofstream& operator << (std::ofstream& ofs, String& obj);
	friend std::ifstream& operator >> (std::ifstream& ifs, String& obj);
};

