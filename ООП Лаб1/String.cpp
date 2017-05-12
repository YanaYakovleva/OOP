#include "String.h"


int String::count = 0;

String::String()//  начальная инициализация
{
	len = 0;
	str = new char[len + 1];
	strcpy(str, "");
	count++;
	//std::cerr << "Constr1" << std::endl;
}

String::String(char *s)//  Инициализация строкой s, переданной пользователем
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	count++;
	//std::cerr << "Constr2" << std::endl;
}

String::String(const String &string)
{
	str = new char[string.len + 1];
	strcpy(str, string.str);
	len = string.len;
	count++;
	//std::cout << "ConstrCopy" << std::endl;
}

String::~String()
{
	delete[] str;
	count--;
	//std::cerr << "Destr" << std::endl;
}

String& String::setString(char *s)
{
	delete[] str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	return *this;
}

void String::show()
{
	std::cout << str << std::endl;
}

int String::search(String substr)
{
	char *s = strstr(str, substr.str);
	if(s!=NULL)
		return s-str;
	return -1;
}

String String::replace(String source, String dest)//замена подстроки на подстроку 
{	
	int count = 0;
	char *tmpstr = str;
	char *s = strstr(tmpstr, source.str);
	while (s)
	{
		count++;
		tmpstr = tmpstr + (strlen(tmpstr) - strlen(s)) + source.len;
		s = strstr(tmpstr, source.str);
	}
	char *newstr = new char[len + (count * (dest.len - source.len))+1];
	s = strstr(str, source.str);
	count = 0;
	char buf[256];
	int sPos;
	int lenStr = len;
	while (s)
	{
		sPos = lenStr - strlen(s);
		strcpy(buf, s + source.len);
		if (count == 0)
		{
			strncpy(newstr, str, sPos);
			newstr[sPos] = '\0';
		}
		else
		{
			newstr[sPos] = '\0';
		}
		strcat(newstr, dest.str);
		strcat(newstr, buf);
		s = strstr(newstr+(sPos+dest.len), source.str);
		lenStr = strlen(newstr);
		count++;
	}
	String result(newstr);
	delete[] newstr;
	
	return result;
}

int String::length()
{
	return len;
}

String String::concat(String strptr)
{
	char *tmpstr = new char[len + strptr.len + 1];
	strcpy(tmpstr, str);
	strcat(tmpstr, strptr.str);
	String result(tmpstr);
	delete[] tmpstr;

	return result;
}

char& String::getSymbol(int i)
{
	return str[i];
}

String String::to_apper()
{
	String result(*this);
	for (int i = 0; i<result.len; i++)
	{
		if (result.str[i] >= 'a' && result.str[i] <= 'z')
		{
			result.str[i] -= 'a' - 'A';
		}
	}
	return result;
}

String String::to_lower()
{
	String result(*this);
	for (int i = 0; i<len; i++)
	{
		if (result.str[i] >= 'A' && result.str[i] <= 'Z')
		{
			result.str[i] += 'a' - 'A';
		}
	}
	
	return result;
}

const char* String::c_str()
{
	return str;
}

int String::getCount()
{
	return count;
}

String String::operator+(const String& rhs)
{
	String tmp;
	tmp.len = len + rhs.len;
	tmp.str = new char[tmp.len + 1];
	strcpy(tmp.str, str);
	strcat(tmp.str, rhs.str);

	return tmp;
}

