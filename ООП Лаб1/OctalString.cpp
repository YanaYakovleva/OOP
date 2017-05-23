#include "OctalString.h"



bool OctalString::check(int n)
{
	while (n != 0)
	{
		if (n % 10 < 0 || n % 10 > 7)
		{
			throw InvalidOctalException("Not octal!\n");
			return false;
		}
		n /= 10;
	}
	return true;
}

void OctalString::i_to_a(int n)
{
	int len = 0;
	for (int t = n; t != 0; t /= 10, len++);
	int tmp = n;
	char* buf = new char[len + 1];
	for (int i = 1; tmp != 0; i++, tmp /= 10)
	{
		buf[len - i] = tmp % 10 + '0';
	}
	buf[len] = '\0';
	String::setString(buf);
	delete[] buf;
}

OctalString::OctalString()
{
	number = 0;
}

OctalString::OctalString(int n)
{
	if (check(n))
	{
		i_to_a(n);
		number = n;
	}
}

OctalString::~OctalString()
{
}

void OctalString::show()
{
	String::show();
	std::cout << "Octal number:"<< number << std::endl;
}

const int OctalString::getOctalNumber()
{
	return number;
}

OctalString & OctalString::setOctalNumber(int n)
{
	if (check(n))
	{
		i_to_a(n);
		number = n;
	}

	return *this;
}

OctalString & OctalString::operator=(OctalString & rhs)
{
	if (&rhs == this)
		return *this;
	number = rhs.number;
	String::operator=(rhs);

	return *this;
	
}


