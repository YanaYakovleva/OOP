#pragma once
#include <iostream>

class InvalidDateException : public std::exception
{
public:
	InvalidDateException(char *message) :std::exception(message) {}
};

class InvalidOctalException : public std::exception
{
public:
	InvalidOctalException(char *message) :std::exception(message) {}
};